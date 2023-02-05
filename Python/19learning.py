class Cat():
    old = 0
    species = 'mammal'

    def __init__(self, name, age):
        self.name = name
        self.age = age


cat1 = Cat('Jason', 2)
cat2 = Cat('Tom', 7)
cat3 = Cat('Plank', 4)


def oldest_cat(*args):
    return max(args)


print(f'The oldest cat is {oldest_cat(cat1.age, cat2.age, cat3.age)} years old')
