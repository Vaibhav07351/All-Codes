from time import time

def decorator(fn):
    def wrap_func():
        t1=time()
        fn()
        t2=time()

        print(f'It took {t2-t1} sec')

    return wrap_func


@decorator
def func1():
    for i in range(10000):
        i*5

@decorator
def func2():
    for i in list(range(1000000)):
        i*5

func1()
func2()