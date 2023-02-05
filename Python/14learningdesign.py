space = 3;
dot = 1;

for line in range(0, 4):

    i = 0
    j = 0
    while (i < space):
        print(" ", end=" ")
        i += 1

    while (j < dot):
        print('*', end=" ")
        j += 1

    while (i < space):
        print(" ", end=" ")
        i += 1

    print('\n')

    space -= 1
    dot += 2
