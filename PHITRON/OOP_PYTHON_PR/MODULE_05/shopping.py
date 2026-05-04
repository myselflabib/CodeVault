class shopping:
    def __init__(self, name):
        self.name=name
        self.cart=[]

    def add_to_cart(self, item, price, quantity):
        product={'item':item, 'price':price, 'quantity':quantity}

        self.cart.append(product)

    def get_cart(self):
        return self.cart

    def checkout(self, ammount):
        total=0
        for item in self.cart:
            total+=item['price']*item['quantity']
        
        if total>ammount:
            print(f'please give {total-ammount} more')
        else:
            print(f'Here is your item and extra: {ammount-total}')


labib=shopping('Labib Hasan')

labib.add_to_cart('egg',9,4)
labib.add_to_cart('pen', 10,5)
labib.add_to_cart('sobji',10,20)
labib.add_to_cart('khata',35,3)

print(labib.get_cart())

labib.checkout(300)

