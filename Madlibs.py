"""
Esse  um programa para escrever um jogo "Mad Libs", basicamente  preencher os espaos vazios com o que se pede.
"""

# The template for the story

STORY = "This morning %s woke up feeling %s. 'It is going to be a %s day!' Outside, a bunch of %ss were protesting to keep %s in stores. They began to %s to the rhythm of the %s, which made all the %ss very %s. Concerned, %s texted %s, who flew %s to %s and dropped %s in a puddle of frozen %s. %s woke up in the year %s, in a world where %ss ruled the world."

print ("The game has started")
name = raw_input("Enter a name: ")
adj1 = raw_input("Input three adjectives: \nFirst:")
adj2 = raw_input("Second: ")
adj3 = raw_input("Third: ")
verb = raw_input("Now one verb: ")
noun1 = raw_input("Two nouns: \nFirst:")
noun2 = raw_input("Second: ")
animal = raw_input("Input a animal:")
food = raw_input("Input a food:")
fruit = raw_input("Input a fruit:")
superhero = raw_input("Input a superhero:")
country = raw_input("Input a country:")
dessert = raw_input("Input a dessert:")
year = raw_input("Input a year:")
print(STORY) % (name, adj1, adj2, animal, food, verb, noun1, fruit, adj3, name, superhero, name, country, name, dessert, name, year, noun2 )





