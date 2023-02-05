class user(object):
    a=20
    def log_in(self):
        print('logged in')

class A(user):
    def __init__(self,name,age):
        self._name=name
        self.age=age

class B(user):
    def __init__(self,cateorgy,age):
        self.category=cateorgy
        self.age=age

m1=[B('bored',12),A('abc',10)]


print(m1[1].age)
