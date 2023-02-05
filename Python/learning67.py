import sys, random


def new(user_input, random_num):
    if (random_num == user_input):
        print('You are a genius!')
        return True
    else:
        print('Try again!')


first = 1
second = 10

random_num = random.randint(first, second)


if __name__=='__main__':
    while True:
        try:
            user_input = int(input(f'Guess a number between {first} and {second} : '))
            if (new(user_input, random_num)):
                break
        except ValueError:
            print('Enter a number only!')