while True:
    try:
        age = int(input('Enter your Age : '))
        do = 10 / age

        raise ValueError('Come on man')

    except ValueError:
        print('Only enter a number!')

    except ZeroDivisionError:
        print('Division by 0 is not allowed!')

    else:
        print('All good!')
        break

    finally:
        print('This will always run')
