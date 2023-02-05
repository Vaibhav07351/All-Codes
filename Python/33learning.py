my_list = [char ** 2 for char in range(0, 100)]
my_list1 = [char ** 2 for char in range(0, 100) if char % 2 == 0]
my_list2 = [char for char in 'oye bekup hai kya bee']

print(my_list == my_list1)

print(my_list)
print(my_list1)
print(my_list2)

my_set = {char for char in 'hello'}
print(my_set)

my_dict={'a':1,'b':2,'c':3,'d':4,'e':5,'f':6}

new_dict={k:v**2 for k,v in my_dict.items() if v%2==0  }

print(new_dict)

new_dict1={num:num**2 for num in [1,2,3]}

print(new_dict1)




