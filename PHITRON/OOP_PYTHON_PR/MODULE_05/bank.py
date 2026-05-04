class account:

    totalUser=0 #class atrribute

    def __init__(self, user_name, number, cash):
        self.user_name=user_name
        self.number=number
        self.cash=cash #instance attribute

        self.totalUser+=1

    def deposit(self, balance):
        self.cash+=balance
    
    def withdraw(self, balance):
        slef.cash-=balance
        
    def getBalanace(self):
        return self.cash
    

user1=account('Labib', 193637, 1000)
user2=account('Hasan', '0157291', 1500)

print(user1.cash)

user1.deposit(1000)
print(user1.cash)

