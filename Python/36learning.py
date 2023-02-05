def my_decorator(fn):
    def wrap_func(*args,**kwargs):
        print('*******')
        fn(*args,**kwargs)
        print('*******')

    return wrap_func

@my_decorator
def hello(a,b,c,d, section='J',emoji=':('):
    print(a,b,c,d,section,emoji)

hello('vaibhav','is','a','cool',emoji=':)')