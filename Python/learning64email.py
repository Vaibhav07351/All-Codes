import re

string= 'vaibhavandsparks@gmail.com'
password='vaibhav123'
pattern=re.compile(r"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)")
password_check=re.compile(r'[a-zA-Z0-9@#$%]{8,}')


print(pattern.search(string))
print(password_check.fullmatch(password))