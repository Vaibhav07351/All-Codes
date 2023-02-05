my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]


def is_odd(item):
    if item %2 == 1:
        return 1

print(list(filter(is_odd,my_list)))
