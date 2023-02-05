def my_decorator(fn):
    def wrap_func():
        print('*******')
        fn()
        print('******')

    return wrap_func


def new_fun1():
    print('hey')


greet = my_decorator(new_fun1)
print(greet())


def new_fun():
    print('Hello')


print(my_decorator(new_fun)())


@my_decorator
def heypr():
    print('HEY BRO')

heypr()


hello2=my_decorator()