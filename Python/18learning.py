class GamePlayer():
    def __init__(self, name, age):
        self.name = name
        self.age = age
        print('Constructor Created')

    def yoman(self):
        print('run')
        return 'done'

    @classmethod
    def adding_num(cls, num1, num2):
        return cls('Thanos', 21)

    @staticmethod
    def add_num(num1,num2):
        return num1+num2


player1 = GamePlayer('Vaibhav', 20)
player2 = GamePlayer('Jason', 21)

print(player1.name, end=' ')
print(player1.age)
print(player2.name, end=' ')
print(player2.age)
player3 = GamePlayer('Smith', 18)
print(player1.yoman())
player1.level = 50
print(player1.level)
print(GamePlayer.add_num(1, 2))
