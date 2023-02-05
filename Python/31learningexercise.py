from functools import reduce

my_pets = ['sisi', 'bibi', 'titi', 'carla']


def capital(item):
    return item.upper()


# print(list(map(capital, my_pets)))

print(list(map(lambda item: item.upper(), my_pets)))

my_strings = ['a', 'b', 'c', 'd', 'e']
my_numbers = [5, 4, 3, 2, 1]

my_numbers.sort()

print(list(zip(my_strings, my_numbers)))

scores = [73, 20, 65, 19, 76, 100, 88]


def over_50(score):
    return score > 50


# print(list(filter(over_50, scores)))

print(list(filter(lambda score: score > 50, scores)))


def accumulator(acc, item):
    print(f'acc= {acc} , item =  {item}')
    return acc + item


my_new = [1, 2, 3, 4, 5]
my_new1 = [1, 2, 3, 4, 5]

#print(reduce(accumulator, (my_new + my_new1)))

print(reduce(lambda acc, item: acc + item, my_new + my_new1))

a=1
b=2
c=(lambda a,b: a+b)
print(c(1,4))