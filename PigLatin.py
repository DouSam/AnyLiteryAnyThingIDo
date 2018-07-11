pyg = 'ay'
#Pedimos a palavra em ingls.
original = raw_input('Enter a word:')
#Verificamos se a palavra  valida.
if len(original) > 0 and original.isalpha():
  print original
else:
  print 'empty'
#Mudamos a palavra para ela ficar totalmente em minuscula.
word = original.lower();
###Selecionamos a primeira letra da palavra que no futuro ir para o final da palavra.
first = word[0];
#Mudando a palavra.
new_word = word + first + pyg;
#Retirando a primeira letra aps mover ela para o final.
new_word = new_word[1:len(new_word)];
#Mostrando a palavra final.
print(new_word);
