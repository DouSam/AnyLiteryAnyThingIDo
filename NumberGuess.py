"""
O programa sera usado para rodar dois dados e perguntar ao jogador a soma deles, caso ele acerte, ele  o grande ganhador, parabns. Agora se ele errar, o computador leva toda bolada pra casa.
"""
from random import randint
from time import sleep

def get_user_guess():
  guess = int(raw_input("Guess a number: \n"))
  return guess
def roll_dice(number_of_sides):
  first_roll = randint(1,number_of_sides)
  second_roll = randint(1,number_of_sides)
  max_val = number_of_sides * 2
  print("The maximum possible value is %d" % max_val)
  guess = get_user_guess()
  if guess > max_val:
    print("No guessing higher than the maximum possible value!")
    sleep(1)
    raw_input("Press any key to exit.")
  else:
    print("Rolling...")
    sleep(4)
    print("The first roll is %d " % first_roll)
    sleep(2)
    print("The second roll is %d " % second_roll)
    sleep(2)
    total_roll = second_roll + first_roll
    print("The sum of rolls is: %d" % total_roll)
    print("The winner is...")
    sleep(3)
    if guess == total_roll:
      print("You win, for the motherland!!")
    else:
      print("Computer. I'am unbeatable, such human.")
    
roll_dice(6)