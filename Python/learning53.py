import random

print(random.random())
print(random.randint(1,2))
print(random.choice([1,2,3,4,5,6,0]))
my_list=[1,2,3,4,5,6]
random.shuffle(my_list)
print(my_list)