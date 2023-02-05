import sys, random

first = int(sys.argv[1])
second = int(sys.argv[2])

random_num = random.randint(first, second)

print(f'Random no is {random_num}')

while True:
    try:
        user_input = int(input(f'Guess a number between {first} and {second} : '))
        if (random_num == user_input):
            print('You are a genius!')
            break

        else:
            print('Try again!')

    except ValueError:
        print('Enter a number only!')
