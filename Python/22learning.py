class User(object):
    def __init__(self,email):
        User.email=email

class Wizard(User):
    def __init__(self,name,power,email):
        super().__init__(email)
        Wizard.power=power
        Wizard.name=name


wizard1=Wizard('Merlin','Sorcerer','merlin@gmail.com')

print(User.email)
print(dir(wizard1))
