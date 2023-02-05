def my_function(name, *args,**kwargs):
        total=0;
        for items in kwargs.values():
            total += items

        return sum(args) + total


print ( my_function(1,2,3,num1=4,num2=5) )