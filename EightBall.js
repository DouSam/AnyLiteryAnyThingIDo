//Nome da pessoa para salvar em uma variavel.
let userName = 'Douglas';
//Verificando se foi colocado algum nome.
userName ? console.log(`Hello ${userName}!`): console.log('Hello!');
//Inserindo a questão.
const userQuestion = "I'am gay ?";
//Mostrando a questão na tela.
console.log(userQuestion);
//Gerando um numero aleatorio de 0 a 7 usando o a biblioteca Math.
let randomNumber = Math.floor(Math.random() * 7)
//Essa variavel identifica o numero aleatorio.
let eightBall = randomNumber;
//Aqui nos iremos escolher as respostas para cada numero gerado.

switch (eightBall) {
  case 0:
    console.log('It is certain.');
    break;
  case 1:
    console.log('It is decidedly so.');
    break;
  case 2:
    console.log('Reply hazy try again.');
    break;
  case 3:
    console.log('Cannot predict now.');
    break;
  case 4:
    console.log('Do not count on it.');
    break; 
  case 5:
    console.log('My sources say no.');
    break;
  case 6:
    console.log('Outlook not so good.');
    break;  
  case 7:
    console.log('Signs point to yes.');
    break;
}

/*Caso você não queira utilizar o switch
if (eightBall === 0) {
  console.log('It is certain.')
} else if (eightBall === 1) {
  console.log('It is decidedly so.')
} else if (eightBall === 2) {
  console.log('Reply hazy try again.')
} else if (eightBall === 3) {
  console.log('Cannot predict now.')
} else if (eightBall === 4) {
  console.log('Do not count on it.')
} else if (eightBall === 5) {
  console.log('My sources say no.')
} else if (eightBall === 6) {
  console.log('Outlook not so good.')
} else {
  console.log('Signs point to yes.')
}
*/ 


