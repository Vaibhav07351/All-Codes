def greet():
    def func():
        return 5

    return func

a=greet()()

print(a)