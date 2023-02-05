try:
    with open(r'C:\Users\Bhardwaj\Desktop\trial.txt',mode='r') as new_file:
        print(new_file.read())

except FileNotFoundError as err:
    print('File not found!!')
    raise err

except IOError as err :
    print('IO error')