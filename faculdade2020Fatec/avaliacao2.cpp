//2840482013025/Douglas Samuel Gonçalves

//Estacionamento autônomo, motorista deixa o carro e pega ele no mesmo local
//Estacionamento tem 5 andares
//      Andar 1: 20 Carros 30 camionetes
//      Andar 2: 25 Carros
//      Andar 3: 10 Camionetes
//      Andar 4: 15 SUPER
//      Andar 5: 20 Camionetes
// TOTAL:   45 CARROS | 60 CAMIONETES | 15 SUPER

//Ticket deve conter Data e Hora da entrada, Data e Hora da saida, Vaga, Tipo de veiculo e valor a ser pago

//          Preços
//Carro: 5/h | SUPER: 10/h | Camionete: 7/h

//Relatório para o estacionamento: Quantidade de Carros/Camionetes/SUPER atendidos, veiculos nao atendidos por lotacao, faturamento medio por hora, faturamento total

#include <iostream>
//Biblioteca para usar o printf
#include <stdio.h>
//Biblioteca para apurar as datas
#include <ctime>

using namespace std;

//----Declarando as variaveis de escopo global----
    //Struct com padrao para datas
    struct data
    {
        int dia;
        int mes;
        int ano;
        int hora;
        int minuto;
    };
    //Struct para armazenar o ticket
    struct ticket
    {
        string placa;
        float valor;
        int vaga;
        string tipoV;
        int qtdHoras;
        struct data dtEntrada;
        struct data dtSaida;
    };
//----Fim declarando as variaveis----

//Função responsável por apurar a diferença de horas dada duas datas.
double calculaDifDatas(struct data dtIni,struct data dtFim)
{
    //Data inicio convertida para fazer o calculo da diferença.
    struct tm dtIniConv = {0};
    dtIniConv.tm_hour = dtIni.hora;
    dtIniConv.tm_min  = dtIni.minuto;
    dtIniConv.tm_mday = dtIni.dia;
    dtIniConv.tm_mon  = dtIni.mes - 1;
    dtIniConv.tm_year = dtIni.ano - 1900;
    //Data fim convertida para fazer o calculo da diferença.
    struct tm dtFimConv = {0};
    dtFimConv.tm_hour = dtFim.hora;
    dtFimConv.tm_min  = dtFim.minuto;
    dtFimConv.tm_mday = dtFim.dia;
    dtFimConv.tm_mon  = dtFim.mes - 1;
    dtFimConv.tm_year = dtFim.ano - 1900;

    //Retornando o valor da diferença
    return difftime(mktime(&dtIniConv),mktime(&dtFimConv));
};

//Função responsável por estacionar o carro.
void estacionaCarro(struct ticket *super,struct ticket *carros,struct ticket *camionetes,int *qtdNaoAtendido)
{
    //variavel para armazenar tipo de carro durante a função
    int tipoC;
    do
    {
        printf("Por favor, insira o tipo de carro \n 1 - SUPER\n 2 - CARRO\n 3 - Camionete \n");
        cin >> tipoC;
    } while (tipoC > 3 || tipoC < 1);    
    //Variavel para armazenar se foi encontrada uma vaga
    bool vagaEnc = false;
    //Variaveis para armazenar os dados do ticket para validação
    string placa;
    int dia,mes,ano,hora,minuto;

    switch(tipoC)
    {   
        //Tipo Super.
        case 1:
            printf("Verificando vagas disponíveis... \n");
            //Percorrendo matriz e verificando se existem vagas
            for (int i = 0; i < 15; i++)
            {
                //Se encontrar um local no estacionamento vago, ele estaciona o carro.
                if (super[i].placa == "" || super[i].placa == "VAGO")
                {
                    vagaEnc = true;
                    //Verificando se a placa foi inserida corretamente.
                    do
                    {
                        printf("Insira a placa do veiculo, contendo 7 caracteres e letras em caixa alta: ");
                        cin >> placa;
                    } while (placa.length() != 7);
                    //Após a placa ser inserida corretamente, atribuimos ela ao ticket.
                    super[i].placa = placa;
                    //Obtendo os dados da data de entrada e verificando se todos foram inseridos corretamente.
                    do
                    {
                        printf("Insira o dia,mes,ano,hora e minuto da entrada no seguinte padrão(10/10/2020-10:10): ");
                        scanf("%d/%d/%d-%d:%d",&dia,&mes,&ano,&hora,&minuto);
                    } while ((dia > 31 || dia < 1) || (mes > 12 || mes < 1) || ano < 1 || (hora < 0 || hora > 23) || (minuto < 0 || minuto > 59));
                    super[i].dtEntrada.dia = dia;
                    super[i].dtEntrada.mes = mes;
                    super[i].dtEntrada.ano = ano;
                    super[i].dtEntrada.hora = hora;
                    super[i].dtEntrada.minuto = minuto;
                    super[i].tipoV = "Super";
                    super[i].vaga = i;
                    //Emitndo a vaga encontrada
                    printf("Vaga encontrada: %d \n Placa: %s \n Horário Registrado: %d:%d %d/%d/%d", i + 1, super[i].placa.c_str(), super[i].dtEntrada.hora, super[i].dtEntrada.minuto, super[i].dtEntrada.dia, super[i].dtEntrada.mes, super[i].dtEntrada.ano);
                    printf("\n");
                    break;
                };
            };
            //Caso contrario ele adiciona mais um carro aos não atendidos por lotação
            if (!vagaEnc)
            {
                *qtdNaoAtendido = *qtdNaoAtendido + 1;
                printf("Peço desculpas mas no momento estamos sem vagas para SUPER.\n");
            };
            break;
        //Tipo Carro.
        case 2:
            printf("Verificando vagas disponíveis... \n");
            //Percorrendo matriz e verificando se existem vagas
            for (int i = 0; i < 45; i++)
            {
                //Se encontrar um local no estacionamento vago, ele estaciona o carro.
                if (carros[i].placa == "" || carros[i].placa == "VAGO")
                {
                    vagaEnc = true;
                    //Verificando se a placa foi inserida corretamente.
                    do
                    {
                        printf("Insira a placa do veiculo, contendo 7 caracteres e letras em caixa alta: ");
                        cin >> placa;
                    } while (placa.length() != 7);
                    carros[i].placa = placa;
                    //Obtendo os dados da data de entrada e verificando se todos foram inseridos corretamente.
                    do
                    {
                        printf("Insira o dia,mes,ano,hora e minuto da entrada no seguinte padrão(10/10/2020-10:10): ");
                        scanf("%d/%d/%d-%d:%d", &dia, &mes, &ano, &hora, &minuto);
                    } while ((dia > 31 || dia < 1) || (mes > 12 || mes < 1) || ano < 1 || (hora < 0 || hora > 23) || (minuto < 0 || minuto > 59));
                    carros[i].dtEntrada.dia = dia;
                    carros[i].dtEntrada.mes = mes;
                    carros[i].dtEntrada.ano = ano;
                    carros[i].dtEntrada.hora = hora;
                    carros[i].dtEntrada.minuto = minuto;
                    carros[i].tipoV = "Carro";
                    carros[i].vaga = i;
                    //Emitndo a vaga encontrada
                    printf("Vaga encontrada %d \n Placa: %s \n Horário Registrado: %d:%d %d/%d/%d", i + 1, carros[i].placa.c_str(), carros[i].dtEntrada.hora, carros[i].dtEntrada.minuto, carros[i].dtEntrada.dia, carros[i].dtEntrada.mes, carros[i].dtEntrada.ano);
                    printf("\n");
                    break;
                };
            };
            //Caso contrario ele adiciona mais um carro aos não atendidos por lotação
            if (!vagaEnc)
            {
                *qtdNaoAtendido = *qtdNaoAtendido + 1;
                printf("Peço desculpas mas no momento estamos sem vagas para Carros.\n");
            };
            break;
        //Tipo Camionete.
        case 3:
            printf("Verificando vagas disponíveis... \n");
            //Percorrendo matriz e verificando se existem vagas
            for (int i = 0; i < 60; i++)
            {
                //Se encontrar um local no estacionamento vago, ele estaciona o carro.
                if (camionetes[i].placa == "" || camionetes[i].placa == "VAGO")
                {
                    vagaEnc = true;
                    //Verificando se a placa foi inserida corretamente.
                    do
                    {
                        printf("Insira a placa do veiculo, contendo 7 caracteres e letras em caixa alta: ");
                        cin >> placa;
                    } while (placa.length() != 7);
                    camionetes[i].placa = placa;
                    //Obtendo os dados da data de entrada e verificando se todos foram inseridos corretamente.
                    do
                    {
                        printf("Insira o dia,mes,ano,hora e minuto da entrada no seguinte padrão(10/10/2020-10:10): ");
                        scanf("%d/%d/%d-%d:%d", &dia, &mes, &ano, &hora, &minuto);
                    } while ((dia > 31 || dia < 1) || (mes > 12 || mes < 1) || ano < 1 || (hora < 0 || hora > 23) || (minuto < 0 || minuto > 59));
                    camionetes[i].dtEntrada.dia = dia;
                    camionetes[i].dtEntrada.mes = mes;
                    camionetes[i].dtEntrada.ano = ano;
                    camionetes[i].dtEntrada.hora = hora;
                    camionetes[i].dtEntrada.minuto = minuto;
                    camionetes[i].tipoV = "Camionete";
                    camionetes[i].vaga = i;
                    //Emitndo a vaga encontrada
                    printf("Vaga encontrada %d \n Placa: %s \n Horário Registrado: %d:%d %d/%d/%d", i + 1, camionetes[i].placa.c_str(), camionetes[i].dtEntrada.hora, camionetes[i].dtEntrada.minuto, camionetes[i].dtEntrada.dia, camionetes[i].dtEntrada.mes, camionetes[i].dtEntrada.ano);
                    printf("\n");
                    break;
                };
            };
            //Caso contrario ele adiciona mais um carro aos não atendidos por lotação
            if (!vagaEnc)
            {
                *qtdNaoAtendido ++;
                printf("Peço desculpas mas no momento estamos sem vagas para Camionetes.\n");
            };
            break;
        default:
            printf("Por favor, insira o tipo corretamente.");
    };

};

//Função responsável por estacionar o carro.
void retiraCarro(struct ticket *super, struct ticket *carros, struct ticket *camionetes, struct ticket *tickets)
{
    //variavel para armazenar tipo de carro durante a função
    int tipoC;
    printf("Por favor, insira o tipo de carro \n 1 - SUPER\n 2 - CARRO\n 3 - Camionete \n");
    cin >> tipoC;
    //Variavel para armazenar a placa do carro.
    string placa;
    //Obtendo a placa do carro a ser consultado.
    printf("Insira a placa do carro em caixa alta e com 7 caracteres: ");
    cin >> placa;
    //Struct para armazenar a data durante a verificacao.
    struct data dt;
    //Variavel apra armazenar a quantidade de segundos de diferença entre os dias.
    double difSeg;
    //Variavel para armazeanr se o carro foi encontrado.
    bool carroEnc = false;
    switch(tipoC)
    {
        //Tipo SUPER.
        case 1:
            //Buscando dentro da matriz pelo carro com a placa inserida
            printf("Verificando em qual vaga está o carro... \n");
            for(int i = 0; i <15;i++)
            {
                //Caso seja encontrado o carro, o ticket será adicionado a matriz de tickets e a vaga sera limpa
                if(super[i].placa == placa)
                {
                    carroEnc = true;
                    printf("Carro encontrado na vaga %d \n",i+1);
                    //Consultando a data de saida para calcular o valor.
                    do
                    {
                        printf("Insira o dia,mes,ano,hora e minuto da saida no seguinte padrão(10/10/2020-10:10): ");
                        scanf("%d/%d/%d-%d:%d", &dt.dia, &dt.mes, &dt.ano, &dt.hora, &dt.minuto);
                        //Obtendo a diferença de segundos entre as datas.
                        difSeg = calculaDifDatas(dt, super[i].dtEntrada);
                        //Verificando se a transformação de segundos para hora gera casa decimais, caso gere é necessário arredondar para baixo
                        //Visto que se trata de um estacionamento com hora fechada e após transforma em horas.
                        difSeg = (int(difSeg) % 3600 == 0 && difSeg > 3600) ? difSeg / 3600 : (difSeg < 3600) ? 1:(difSeg - (int(difSeg) % 3600)) / 3600;
                    } while ((dt.dia > 31 || dt.dia < 1) || (dt.mes > 12 || dt.mes < 1) || dt.ano < 1 || (dt.hora < 0 || dt.hora > 23) || (dt.minuto < 0 || dt.minuto > 59) || difSeg < 0);
                    //Buscando indice vazio para inserir o ticket.
                    for(int j=0; j < 1000;j++)
                    {
                        if(tickets[j].placa == "")
                        {
                            //Após encontrar um ticket sem informação, inserimos a informação do ticket do estacionamento nele para limpar a vaga.
                            tickets[j].dtEntrada = super[i].dtEntrada;
                            tickets[j].dtSaida = dt;
                            tickets[j].placa = super[i].placa;
                            tickets[j].qtdHoras = difSeg;
                            tickets[j].tipoV = "Super";
                            tickets[j].vaga = super[i].vaga;
                            tickets[j].valor = difSeg * 10;
                            printf("Buscando carro da vaga %d, placa %s \n", tickets[j].vaga ,placa.c_str());
                            //Exibindo valores
                            printf("----Carro SUPER----\n");
                            printf("Data de entrada: %d/%d/%d-%d:%d", tickets[j].dtEntrada.dia, tickets[j].dtEntrada.mes, tickets[j].dtEntrada.ano, tickets[j].dtEntrada.hora, tickets[j].dtEntrada.minuto);
                            printf("\nData de saída  : %d/%d/%d-%d:%d", dt.dia, dt.mes, dt.ano, dt.hora, dt.minuto);
                            printf("\nQuantidade de horas: %d\nValor da hora: R$ 10,00\nTOTAL: %f", tickets[j].qtdHoras, tickets[j].valor);
                            printf("\n");
                            break;
                        };
                    };
                    super[i].placa = "VAGO";
                    break;
                };
            };
            if(!carroEnc)
            {
                printf("Carro não foi encontrado, verifique a placa inserida: %s \n", placa.c_str());
            };
            break;
        //Tipo carro.
        case 2:
            //Buscando dentro da matriz pelo carro com a placa inserida
            printf("Verificando em qual vaga está o carro... \n");
            for (int i = 0; i < 45; i++)
            {
                //Caso seja encontrado o carro, o ticket será adicionado a matriz de tickets e a vaga sera limpa
                if (carros[i].placa == placa)
                {
                    carroEnc = true;
                    printf("Carro encontrado na vaga %d \n", i + 1);
                    //Consultando a data de saida para calcular o valor.
                    do
                    {
                        printf("Insira o dia,mes,ano,hora e minuto da saida no seguinte padrão(10/10/2020-10:10): ");
                        scanf("%d/%d/%d-%d:%d", &dt.dia, &dt.mes, &dt.ano, &dt.hora, &dt.minuto);
                        //Obtendo a diferença de segundos entre as datas.
                        difSeg = calculaDifDatas(dt, carros[i].dtEntrada);
                        //Verificando se a transformação de segundos para hora gera casa decimais, caso gere é necessário arredondar para baixo
                        //Visto que se trata de um estacionamento com hora fechada e após transforma em horas.
                        difSeg = (int(difSeg) % 3600 == 0 && difSeg > 3600) ? difSeg / 3600 : (difSeg < 3600) ? 1 : (difSeg - (int(difSeg) % 3600)) / 3600;
                    } while ((dt.dia > 31 || dt.dia < 1) || (dt.mes > 12 || dt.mes < 1) || dt.ano < 1 || (dt.hora < 0 || dt.hora > 23) || (dt.minuto < 0 || dt.minuto > 59) || difSeg < 0);
                    //Buscando indice vazio para inserir o ticket.
                    for (int j = 0; j < 1000; j++)
                    {
                        if (tickets[j].placa == "")
                        {
                            //Após encontrar um ticket sem informação, inserimos a informação do ticket do estacionamento nele para limpar a vaga.
                            tickets[j].dtEntrada = carros[i].dtEntrada;
                            tickets[j].dtSaida = dt;
                            tickets[j].placa = carros[i].placa;
                            tickets[j].qtdHoras = difSeg;
                            tickets[j].tipoV = "Carro";
                            tickets[j].vaga = carros[i].vaga;
                            tickets[j].valor = difSeg * 5;
                            printf("Buscando carro da vaga %d, placa %s \n", tickets[j].vaga, placa.c_str());
                            //Exibindo valores
                            printf("----Carro padrão----\n");
                            printf("Data de entrada: %d/%d/%d-%d:%d", tickets[j].dtEntrada.dia, tickets[j].dtEntrada.mes, tickets[j].dtEntrada.ano, tickets[j].dtEntrada.hora, tickets[j].dtEntrada.minuto);
                            printf("\nData de saída  : %d/%d/%d-%d:%d", dt.dia, dt.mes, dt.ano, dt.hora, dt.minuto);
                            printf("\nQuantidade de horas: %d\nValor da hora: R$ 05,00\nTOTAL: %f", tickets[j].qtdHoras, tickets[j].valor);
                            printf("\n");
                            break;
                        };
                    };
                    carros[i].placa = "VAGO";
                    break;
                };
            };
            if (!carroEnc)
            {
                printf("Carro não foi encontrado, verifique a placa inserida: %s \n", placa.c_str());
            };
            break;
        //Tipo camionete
        case 3:
            //Buscando dentro da matriz pelo carro com a placa inserida
            printf("Verificando em qual vaga está o carro... \n");
            for (int i = 0; i < 60; i++)
            {
                //Caso seja encontrado o carro, o ticket será adicionado a matriz de tickets e a vaga sera limpa
                if (camionetes[i].placa == placa)
                {
                    carroEnc = true;
                    printf("Carro encontrado na vaga %d \n", i + 1);
                    //Consultando a data de saida para calcular o valor.
                    do
                    {
                        printf("Insira o dia,mes,ano,hora e minuto da saida no seguinte padrão(10/10/2020-10:10): ");
                        scanf("%d/%d/%d-%d:%d", &dt.dia, &dt.mes, &dt.ano, &dt.hora, &dt.minuto);
                        //Obtendo a diferença de segundos entre as datas.
                        difSeg = calculaDifDatas(dt, camionetes[i].dtEntrada);
                        //Verificando se a transformação de segundos para hora gera casa decimais, caso gere é necessário arredondar para baixo
                        //Visto que se trata de um estacionamento com hora fechada e após transforma em horas.
                        difSeg = (int(difSeg) % 3600 == 0 && difSeg > 3600) ? difSeg / 3600 : (difSeg < 3600) ? 1 : (difSeg - (int(difSeg) % 3600)) / 3600;
                    } while ((dt.dia > 31 || dt.dia < 1) || (dt.mes > 12 || dt.mes < 1) || dt.ano < 1 || (dt.hora < 0 || dt.hora > 23) || (dt.minuto < 0 || dt.minuto > 59) || difSeg < 0);
                    //Buscando indice vazio para inserir o ticket.
                    for (int j = 0; j < 1000; j++)
                    {
                        if (tickets[j].placa == "")
                        {
                            //Após encontrar um ticket sem informação, inserimos a informação do ticket do estacionamento nele para limpar a vaga.
                            tickets[j].dtEntrada = camionetes[i].dtEntrada;
                            tickets[j].dtSaida = dt;
                            tickets[j].placa = camionetes[i].placa;
                            tickets[j].qtdHoras = difSeg;
                            tickets[j].tipoV = "Camionete";
                            tickets[j].vaga = camionetes[i].vaga;
                            tickets[j].valor = difSeg * 7;
                            printf("Buscando carro da vaga %d, placa %s \n", tickets[j].vaga, placa.c_str());
                            //Exibindo valores
                            printf("----Camionete----\n");
                            printf("Data de entrada: %d/%d/%d-%d:%d", tickets[j].dtEntrada.dia, tickets[j].dtEntrada.mes, tickets[j].dtEntrada.ano, tickets[j].dtEntrada.hora, tickets[j].dtEntrada.minuto);
                            printf("\nData de saída  : %d/%d/%d-%d:%d", dt.dia, dt.mes, dt.ano, dt.hora, dt.minuto);
                            printf("\nQuantidade de horas: %d\nValor da hora: R$ 07,00\nTOTAL: %f", tickets[j].qtdHoras, tickets[j].valor);
                            printf("\n");
                            break;
                        };
                    };
                    camionetes[i].placa = "VAGO";
                    break;
                };
            };
            if (!carroEnc)
            {
                printf("Carro não foi encontrado, verifique a placa inserida: %s \n", placa.c_str());
            };
            break;
        //Caso seja inserido um valor diferente ele retorna a mensagem de erro.
        default:
            printf("Por favor, insira o tipo correto. \n");
    };

};

//Função responsável por emitir os relatórios
void emiteRelatorios(struct ticket *tickets,int *qtdNaoAtendido)
{
    //Variaveis para armazenar as datas de referencia
    int mesI,anoI,mesF,anoF,relatorio;
    //Obtendo as datas que serão usadas como referencia para executar os relatórios
    do
    {
        printf("Insira a data, como o exemplo 07/2020, inicial de apuração do relatório: ");
        scanf("%d/%d", &mesI, &anoI);
    } while ((mesI > 12 || mesI < 1) || (anoI < 0));
    do
    {
        printf("Insira a data, como o exemplo 07/2020, final da apuração do relatório: ");
        scanf("%d/%d", &mesF, &anoF);
    } while ((mesF > 12 || mesF < 1) || (anoF < 0));
    printf("Insira: \n1-Para emitir a quantidade de veiculos atendidos. \n2-Para emitir a quantidade de veiculos não atendidos por lotacao.\n3-Para emitir o faturamento médio por hora.\n4-Para emitir o faturamento total.\nInsira a opcao: ");
    cin >> relatorio;
    //Variaveis para armazenar valores que serao utilizados para gerar o relatório
    int qtdVeiculosAt = 0, qtdSuperAt = 0, qtdCarroAt = 0, qtdCamioneteAt = 0, totalHora = 0, tipoC = 0;
    double fatMedio = 0, fatTotal = 0;
    switch(relatorio)
    {
        case 1:
            //Emitir a quantidade de veiculos atendidos percorrendo a matriz de ticket.
            for(int i = 0; i < 1000;i++)
            {
                //Verificando se o ticket está dentro do período
                if((tickets[i].dtEntrada.ano >= anoI && tickets[i].dtEntrada.ano <= anoF) && (tickets[i].dtEntrada.mes >= mesI && tickets[i].dtEntrada.mes <= mesF))
                {
                    //Alterando tipoC de acordo com o tipo do carro, 1-Super,2-Carro e 3-Camionete
                    tipoC = (tickets[i].tipoV == "Super") ? 1 : (tickets[i].tipoV == "Carro") ? 2 : (tickets[i].tipoV == "Camionete") ? 3 : 4;
                    switch (tipoC)
                    {
                    case 1:
                        qtdVeiculosAt++;
                        qtdSuperAt++;
                        break;
                    case 2:
                        qtdVeiculosAt++;
                        qtdCarroAt++;
                        break;
                    case 3:
                        qtdVeiculosAt++;
                        qtdCamioneteAt++;
                        break;
                    default:
                        break;
                    };
                };
            };
            printf("------Quantidade de Veiculos atendidos------\n");
            printf("Periodo: %d/%d-%d/%d\n", mesI, anoI, mesF, anoF);
            printf("Carros SUPER  : %d\n",qtdSuperAt);
            printf("Carros PADRÃO : %d\n",qtdCarroAt);
            printf("Camionetes    : %d\n",qtdCamioneteAt);
            printf("TOTAL         : %d\n",qtdVeiculosAt);
            printf("--------------------------------------------\n");
            break;
        case 2:
            printf("O relatório 2 não utiliza o período inserido, lista o total desde o começo da operação do sistema\n");
            //Emitir a quantidade de veiculos não atendidos por lotação.
            printf("------Quantidade de Veiculos Não Atendidos------\n");
            printf("Quantidade de Veiculos não atendidos por lotação: %d\n",*qtdNaoAtendido);
            printf("------------------------------------------------");
            break;
        case 3:
            //Emitir faturamento médio por hora.
            for(int i = 0;i < 1000; i++)
            {
                //Verificando se o ticket está dentro do período
                if ((tickets[i].dtEntrada.ano >= anoI && tickets[i].dtEntrada.ano <= anoF) && (tickets[i].dtEntrada.mes >= mesI && tickets[i].dtEntrada.mes <= mesF))
                {
                    totalHora += tickets[i].qtdHoras;
                    fatMedio  += tickets[i].valor;
                };
            };
            printf("------Faturamento Médio Por Hora------\n");
            printf("Periodo: %d/%d-%d/%d\n", mesI, anoI, mesF, anoF);
            printf("Quantidade de Horas: %d\n", totalHora);
            printf("Total de faturamento: %f\n", fatMedio);
            printf("Faturamento Medio por Hora: %f\n", double(fatMedio / totalHora));
            printf("--------------------------------------\n");
            break;
        case 4:
            //Emitir o faturamento total.
            for(int i = 0;i < 1000; i++)
            {
                //Verificando se o ticket está dentro do período
                if ((tickets[i].dtEntrada.ano >= anoI && tickets[i].dtEntrada.ano <= anoF) && (tickets[i].dtEntrada.mes >= mesI && tickets[i].dtEntrada.mes <= mesF))
                {
                    fatTotal +=tickets[i].valor;
                };
            };
            printf("------Faturamento Total------\n");
            printf("Periodo: %d/%d-%d/%d\n", mesI, anoI, mesF, anoF);
            cout << "Faturamento total: " << fatTotal << endl;
            printf("-----------------------------\n");
            break;
        default:
            printf("Insira o relatório correto.");
    };
};

int main()
{
    //----Declarando as variaveis----
        //Matrizes que serao usadas como estacionamento para armazenar o ticket enquanto o carro estiver no estacionamento.
        struct ticket vagasSuper[14] = {};
        struct ticket vagasCarros[44] = {};
        struct ticket vagasCamionetes[59] = {};
        //Matriz para armazenar todos os tickets passados.
        struct ticket tickets[999] = {};
        //Variavel para armazenar escolha.
        int escolha;
        //Variavel para registrar veiculos que não foram atendidos por falta de vaga
        int qtdNaoAtendido = 0;
    //----Fim declarando as variaveis----

    //Exibindo tabela com preços
    cout << "-----------PREÇOS----------- \n";
    cout << "Carro     R$05,00 p/ hora \n";
    cout << "SUPER     R$10,00 p/ hora \n";
    cout << "Camionete R$07,00 p/ hora \n";
    cout << "---------------------------- \n";
    //Obtendo a primeira escolha, 1-Guardar carro, 2-Retirar Carro, 3-Emitir Relatórios.
    cout << "Insira 1 - Guardar Carro, 2-Retirar Carro, 3-Emitir Relatórios ou 0 para sair. \n";
    cin >> escolha;
    //Enquanto a escolha não for sair o sitema executa as 3 funções basicas com base no que foi digitado.
    while (escolha != 0)
    {
        switch (escolha)
        {
            case 1:
                //Chama a função para estacionar o carro
                estacionaCarro(vagasSuper,vagasCarros,vagasCamionetes,&qtdNaoAtendido);
                cout << "Insira 1 - Guardar Carro, 2-Retirar Carro, 3-Emitir Relatórios ou 0 para sair. \n";
                cin >> escolha;
                break;
            case 2:
                //Chama a função para retirar o carro do estacionamento
                retiraCarro(vagasSuper, vagasCarros, vagasCamionetes, tickets);
                cout << "Insira 1 - Guardar Carro, 2-Retirar Carro, 3-Emitir Relatórios ou 0 para sair. \n";
                cin >> escolha;
                break;
            case 3:
                //Chama a função para emitir relatórios
                emiteRelatorios(tickets,&qtdNaoAtendido);
                cout << "Insira 1 - Guardar Carro, 2-Retirar Carro, 3-Emitir Relatórios ou 0 para sair. \n";
                cin >> escolha;
                break;
            default:
                cout << "Número inserido incorreto, insira novamente. \n";
                cout << "Insira 1 - Guardar Carro, 2-Retirar Carro, 3-Emitir Relatórios ou 0 para sair. \n";
                cin >> escolha;
        };
    };
    cout << "Finalizando sistema...";
    return 0;
}