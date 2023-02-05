# count = 0
#
#
# def counting():
#     global count
#     count+= 1
#     return count
#
#
# print(counting())
# counting()
# print(counting()d)

def outer():
    x='local'

    def inner():
        nonlocal x
        x='nonlocal'
        print('inner : ',x)

    inner()
    print('outer : ',x)

outer()



repa



