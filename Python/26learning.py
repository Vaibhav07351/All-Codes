class A:
    num=10

class B(A):
    num=2

class C(A):
    num=5

class D(C,B):
    pass

obj1=D()

print(obj1.num)