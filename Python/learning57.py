from collections import Counter, defaultdict, OrderedDict

list = (4, 5, 5, 6, 7, 7, 7)

print(Counter(list))
print(Counter('hello'))

new_dict = defaultdict(lambda x=5: x, {'a': 1, 'b': 2})

new_dict['b'] = 3
print(new_dict['c'])
print(new_dict['d'])

try_dict1 = ({'a': 1})
try_dict1['b'] = 2
try_dict1['c'] = 3

try_dict2 = ({'a': 1})
try_dict2['c'] = 3
try_dict2['b'] = 2

print(try_dict1 == try_dict2)

print(try_dict1)
print(try_dict2)