class A:
    my_dict = {'a':1,
                   'b': 2,
    'c': 3
               }

    def __init__(self, name):
        self.name = name

    def __len__(self):
        return 2

    def __call__(self):
        return 'called'

    def __getitem__(self, item):
        return self.my_dict[item]

    def __del__(self):
        print( 'deleted')

obj1 = A('Ramesh')

print(obj1())
print(obj1.my_dict['a'])
del obj1


