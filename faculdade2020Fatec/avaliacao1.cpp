//2840482013025/Douglas Samuel Gonçalves

//Maquina de vendas automatica na qual você tem vários produtos, a pessoa insere o dinheiro e recebe o produto/troco
//Dois modos
//  ADM:Repor estoque, listar inventario, listar o quanto faturou e o quanto ainda pode faturar
//  USU:Listagem com valores e nome dos produtos assim como estoque, usuario informa o produto e o valor inserido.
//Poderia ser feito uma matriz para armazenar os items porém a mistura entre tipos de variaveis torna mais facil criar varios vetores de mesmo tamanho.
//                              TABELA INVENTARIO
//   ID    |     NOME      |    PRECP    |    QTD    |    TT_VENDAS    |
//   000   |     DANONE    |  R$ 01,50   |   10      |                 |
//   001   |     DORITOS   |  R$ 05,50   |   05      |                 |
//   002   |     MANGA     |  R$ 12,50   |   50      |                 |
//   003   | GUARANA JESUS |  R$ 06,50   |   01      |                 |
//   004   |     DOLLY     |  R$ 00,50   |   60      |                 |
//___________________________________________________________________

#include <iostream>

using namespace std;

//O sistema ira considerar que em um primeiro momento o Administrador inseriu o estoque e preço de cada produto e com no máximo 999 itens.

//----Funcao para buscar o faturamento esperado da maquina com estoque e preços atuais.----
double retorna_faturamento(int estoque[999], double precoPorItem[999])
{
    double faturamento = 0;
    //Para cada item até 999(maximo da maquina), e feito a soma do produto da quantidade disponivel no estoque e preco atual.
    for (int i = 0; i < 999; i++)
    {
        faturamento += estoque[i] * precoPorItem[i];
    };
    return faturamento;
};
//----Fim Função retorna_faturamento----

int main()
{
    //----Declarando as variaveis----
        //Será necessário declarar uma variavel do tipo string ou char para identificar que modo está conectado.
    char modo;
        //Armazenar o valor total das vendas de cada produto, total do lucro produzido pela maquina, preco de cada item e o quanto a maquina ainda pode faturar com o estoque restante.
    double valorTotal,totalPorItem[999] = {0},precoPorItem[999] = {0},fatuRestanteItem[999]={0},fatuRestanteTotal;
        //valor inserido pelo usuario, troco, quantidade de itens
    double valorIns,troco,qtd;
        //Armazenar os nomes dos produtos e o nome do produto para usar como flag.
    string nomes[999], nome;
        //Armazenar quantidades e a opção do administrador ao alterar o estoque, id do produto escolhido pelo usuario.
    int estoque[999] = {0}, opcao, id;
        //Verificar se é a primeira vez que a maquina é iniciada.
    bool estoqIni = true;
    //----Fim declarando variaveis---
    //----Buscando e tratando o modo----
    cout << "Insira o modo[U-usuário,A-Administrador] que irá acessar:";
    cin >> modo;
    //while para a maquina funcionar até que seja inserido S no modo
    while(modo != 'S')
    {
        switch (modo)
        {
            //Se o modo for usuário, listar os produtos e preços
            case 'U':
                //Usando um for para listar os produtos e como quebra caso o nome seja 0 ele para de exibir
                cout << "ID |   Produto |  QTD   |   PRECO   |" << endl;
                for(int i=0;i<999;i++)
                {
                    //Checando se for zero
                    if(nomes[i] == "")
                    {
                        break;
                    };
                    //Caso não seja imprimir nome, valor e quantidade disponível.
                    cout << i;
                    cout << "   " << nomes[i];
                    cout << "   " << estoque[i];
                    cout << "   " << precoPorItem[i];
                    cout << endl;
                };
                cout << endl;
                cout << "Digite o ID do produto que deseja comprar(9996 para sair): ";
                cin >> id;
                cout << "Quantidade que deseja comprar: ";
                cin >> qtd;
                cout << "Insira as notas e aguarde o troco: ";
                cin >> valorIns;
                //Verifique se possui estoque e se ão foi selecionado para sair.
                if(estoque[id] > qtd && id != 9996)
                {
                    if(valorIns >= (qtd * precoPorItem[id]))
                    {
                        //Verifica o troco e apenas exibe caso diferente de zero.
                        troco = valorIns - (qtd * precoPorItem[id]);
                        if(troco !=0)
                        {
                            cout << "Retire o troco de R$" << troco << endl;
                        };
                        cout << "Retire os itens" << endl;
                        //Atualiza o estoque do item e soma o valor no total vendido do item.
                        estoque[id] = estoque[id] - qtd;
                        totalPorItem[id] += qtd * precoPorItem[id];
                    }
                    else
                    {
                        //Caso o valor inserido não seja o suficiente.
                        cout << "Valor inserido não é o suficiente." << endl;
                    };
                }
                else
                {   
                    cout << "Produto indisponivel ou escolhida opcao para sair."<<endl;
                };
                cout << "Insira o modo[U-usuário,A-Administrador] que irá acessar:";
                cin >> modo;
                break;
            //Se o modo for administrdor, inserir os produtos e verificar estoque atual.
            case 'A':
                //Verifica se é a primeira vez na qual o estoque é inserido.
                if(estoqIni)
                {
                    //Caso seja o primeiro estoque, estoque inicial, irei usar um for de 0 a 998 e inserir os itens na array
                    for(int i=0;i<998;i++)
                    {
                        //Inserindo nome do item
                        cout << "Nome do item:(digite 'parar' para parar)";
                        cin >> nome;
                        //Flag para parar antes dos 999 itens
                        if(nome == "parar")
                        {
                            break;
                        };
                        nomes[i] = nome;
                        //Quantidade
                        cout << "Quantidade:";
                        cin >> estoque[i];
                        //Preço
                        cout << "Preço:(favor inserir o valor sem R$ e . no lugar da virgula)";
                        cin >> precoPorItem[i];
                    };
                    estoqIni = false;
                    //Exibe o quanto a maquina ainda pode faturar
                    fatuRestanteTotal = retorna_faturamento(estoque, precoPorItem);
                    cout << "Faturamento esperado: R$"<< fatuRestanteTotal << endl;
                    cout << "Insira o modo[U-usuário,A-Administrador] que irá acessar:";
                    cin >> modo;
                }
                else
                {
                    //Exibe o estoque atual junto ao quanto que já foi vendido
                    for(int i=0; i< 999;i++)
                    {
                        //verifica se o nome está zerado pois se o nome for zerado, acabaram os itens
                        if(nomes[i] != "")
                        {
                            cout << "Produto: " <<  nomes[i];
                            cout << " Quantidade: " << estoque[i];
                            cout << " Preço: " <<  precoPorItem[i];
                            cout << " Total por venda: " << totalPorItem[i];
                            //Calcula o valor que pode ser alcançado pelo item
                            fatuRestanteItem[i] = estoque[i] * precoPorItem[i];
                            cout << " Total que pode ser alcançado com estoque atual e preço: " << fatuRestanteItem[i];
                            cout << endl;
                            cout << "Caso queira alterar o item digite 0, caso contrario insira um valor qualquer para ir ao proximo: ";
                            cin >> opcao;
                            if(opcao == 0)
                            {
                                //Inserindo nome do item
                                cout << "Nome do item "<< nomes[i] << " edite o nome ou insira o mesmo novamente para manter este. ";
                                cin >> nomes[i];
                                //Quantidade
                                cout << "Quantidade " << estoque[i] << " edite a quantidade ou insira a mesma novamente para manter esta. ";
                                cin >> estoque[i];
                                //Preço
                                cout << "Preço " << precoPorItem[i] << " edite o valor ou insira o mesmo novamente para manter este. (favor inserir o valor sem R$ e . no lugar da virgula)";
                                cin >> precoPorItem[i];
                            };
                        }
                        else
                        {
                            break;
                        };
                    };
                    fatuRestanteTotal = retorna_faturamento(estoque, precoPorItem);
                    cout << "Faturamento esperado: R$" << fatuRestanteTotal << endl;
                    cout << "Insira o modo[U-usuário,A-Administrador] que irá acessar:";
                    cin >> modo;
                };
            break;
            default:
                cout << "Modo inserido incorreto" << endl;
                cout << "Insira o modo[U-usuário,A-Administrador] que irá acessar:";
                cin >> modo;
                break;
        };
    };
    //----Fim buscando e tratando o modo----
}
