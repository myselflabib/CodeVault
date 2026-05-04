class phone:
    manufactured='china'

    def __init__(self, owner, brand, price):
        self.owner =owner
        self.brand=brand
        self.price=price
        print("constructor")

    def send_sms(self, phone, sms):
        text=f'sending to: {phone} and sms: {sms}'


ph=phone('Kala chan', 'oppo', 9500)

print(ph.owner,ph.brand, ph.price)
