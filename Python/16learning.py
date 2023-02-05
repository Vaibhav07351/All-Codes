# def highest_even(mylist):
#     for items in mylist:
#         if items%2==0:
#             high=items
#             break
#         else:
#             high=0
#
#     for item in mylist:
#         if item%2 == 0:
#             if item>high:
#                 high=item
#     return high
#
#
# print(highest_even([1,11,21]) )




def highest_even(my_list):
    evens = []

    for item in my_list:
        if item % 2 == 0:
            evens.append(item)

    return max(evens)

print(highest_even([1,3,5,7,9,10,21]))