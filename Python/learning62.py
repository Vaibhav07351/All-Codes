import re

string_text='My name is Vaibhav bhardwaj name'

print('name' in string_text)

a=(re.search('name',string_text))
print(re.search('Name',string_text))
print(a)
print(a.span())
print(a.start())
print(a.end())
print(a.group())

