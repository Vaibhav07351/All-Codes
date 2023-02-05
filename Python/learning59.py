# import os
#
# os.chdir(r'C:\Users\Bhardwaj\Desktop')

new_file= open(r'C:\Users\Bhardwaj\Desktop\trial.txt')

# print(new_file.read())
# new_file.seek(0)
# print(new_file.read())
# new_file.seek(0)
# print(new_file.read())

print(new_file.readlines())

new_file.close()

