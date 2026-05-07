#encapsulation Hide details

#access modifier


class Bank:
    def __init__(self, holder_name, init_depo):
        self.holder_name=holder_name #public attribute
        self._branch='Banani' #protected
        self.__balance=init_depo #private

rafsan=Bank("Choto bro", 10000)

print(rafsan.holder_name)
print(rafsan.__balance)


        