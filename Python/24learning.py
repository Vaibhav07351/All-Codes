class SuperList(list):

    def __len__(self):
        return 1000


super_list1=SuperList()
print(len(super_list1))
super_list1.append(5)
super_list1.append(10)
super_list1.append(15)
super_list1.append(14)
super_list1.append(13)
super_list1.append(11)
print(super_list1)