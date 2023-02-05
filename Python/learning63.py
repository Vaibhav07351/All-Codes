import re

string_text='My name is Vaibhav bhardwaj name'

pattern = re.compile('My name')

print(pattern.findall(string_text))
print(pattern.fullmatch(string_text))
print(pattern.match(string_text))