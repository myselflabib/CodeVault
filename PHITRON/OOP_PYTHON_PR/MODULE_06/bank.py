class Bank:
    def __init__(self, holder_name, init_depo):
        self.holder_name=holder_name
        self.balance=init_depo

rafsan=Bank("Choto bro", 10000)

print(rafsan.holder_name)
print(rafsan.balance)


        