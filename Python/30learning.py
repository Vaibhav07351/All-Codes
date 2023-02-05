from functools import reduce

my_list=[1,2,3,4,5]

def addition(acc,b):
    print(f'acc = {acc} , b = {b}')
    return acc+b

print(reduce(addition,range(3,8)))