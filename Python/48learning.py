def fib_generator(n):
    i = 0
    second_last = 0
    last = 1
    while i <= n - 2:
        new = second_last + last

        second_last = last
        last = new
        i += 1
        yield new


for item in fib_generator(30):
    print(item)
