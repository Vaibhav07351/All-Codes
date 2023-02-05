def fib_generator(n):
    second_last = 0
    last = 1

    for i in range(n - 1):
        new = last + second_last

        yield new
        second_last = last
        last = new


print(0)
print(1)
for item in fib_generator(10):
    print(item)
