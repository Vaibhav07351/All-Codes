class OwnRange:
    num=0
    def __init__(self, first, last):
        self.first = first
        self.last = last
        self.num=self.first


    def __iter__(self):
        return self

    def __next__(self):
        if self.num < self.last:
            self.num += 1
            return self.num-1


        raise StopIteration


myobj = OwnRange(0, 100)
aes = OwnRange(3, 13)


for i in myobj:
    print(i)


for i in aes:
    print(i)


