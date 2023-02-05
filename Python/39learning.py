from time import time

def dec_fun(fn):
    def wrap_func(*args,**kwargs):
        timeini=time()
        result = fn(*args,**kwargs)
        timefin=time()
        print(f'Process time is {timefin-timeini} sec')
        return result

    return wrap_func

@dec_fun
def new_fun():
    for i in range(100000007):
        i*5

new_fun()

