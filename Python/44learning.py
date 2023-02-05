def generator_function(n):
    for i in range(n):
        yield i * 2


g = generator_function(5)

print(next(g))
print(next(g))
print(next(g))
print(next(g))
print(next(g))
print(next(g))
print(next(g))

