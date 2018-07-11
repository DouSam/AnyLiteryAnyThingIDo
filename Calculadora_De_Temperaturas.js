//Igualando a previso de hoje em Kelvin.
const kelvin = 293;
//Convertendo kelvin para celsius.
const celsius = kelvin - 273;
//Convertendo agora Celsius para fahrenheit.
let fahrenheit = Math.floor(celsius * (9/5) + 32);
console.log(`The temperature is ${fahrenheit} degrees Fahrenheit.`);
//Convertendo Celsius para Newton.
let Newton = Math.floor(celsius * (33/100));
console.log(`The temperature is ${Newton}`);