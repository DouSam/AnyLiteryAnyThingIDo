#Uma função para definir o custo do hotel.
def hotel_cost(night):
  return 140 * night
#Definindp o custo para ir até a cidade. Com cidades e custos pré definidos.
def plane_ride_cost(city):
  if city == "Charlotte":
    return 183
  elif city == "Tampa":
    return 220
  elif city == "Pittsburgh":
    return 222
  elif city == "Los Angeles":
    return 475
#Definindo custo do aluguel do carro.
def rental_car_cost(days):
  cost = 40 * days
  if days >= 7:
    cost -= 50
  elif days >= 3 and days <= 6:
    cost -= 20
  return cost 
#Somando todos os gastos
def trip_cost(city,days,spending_money):
  return rental_car_cost(days) + hotel_cost(days - 1) + plane_ride_cost(city) + spending_money

#Definindo variaveis para pergunta onde o usuario irá, quanto tempo ira fica e quanto pretende gastar. É interessante definir o tipo.
city = str(raw_input("What's the city ? \n"))
days = int(raw_input("For some days ?\n"))
money = float(raw_input("Money are you carring?\n"))
print("We are calculing...")
#Aqui ele mostra o total. Usando a função.
print("You will spend: %d" % (trip_cost(city, days, money)))
input("Press enter to exit.") 

#This code run with Python 2.x
