"""O programa funciona para entender o que pode ser feito com dicionarios,
nesse caso ele cria 3
sendo a lista de compras da pessoa o primeiro
estoque o segundo
e preço o terceiro.
Logo apos isso ele calcula na função
se existe estoque do produto e adiciona o preço dele ao total. Logo depois ele tira a quantidade do produto do estoque.
"""
shopping_list = ["banana", "orange", "apple"]

stock = {
  "banana": 6,
  "apple": 0,
  "orange": 32,
  "pear": 15
}
    
prices = {
  "banana": 4,
  "apple": 2,
  "orange": 1.5,
  "pear": 3
}

def compute_bill(food):
  total = 0
  for item in food:
    if stock[item] > 0:
      total = total + prices[item]
      stock[item] -= 1
    else:
      print ("Sorry, we don't have this product more!")
  return total
print("The total of your buy is: %d") % total
