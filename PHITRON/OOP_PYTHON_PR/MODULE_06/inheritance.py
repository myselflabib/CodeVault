#base class, parent class common attributes+functionality class
# derived class, child class, uncommon attribute+fu

class device:
    def __init__(self, brand, price, color, origin):
        self.brand=brand
        self.price=price
        self.color=color
        self.origin=origin

    def run(self):
        pass

class laptop:
    def __init__(self, memory,  ssd):
        self.memory=memory
        self.ssd=ssd

    def coding(self):
        return f'Learning coding'


class phone(device):
    def __init__(self, brand, price, color, origin, dual_sim):
        self.dual_sim=dual_sim
        super().__init__(brand, price, color, origin)

    def phone_call(self, number, text):
        return f'sending msg to: {number}, with: {text}'

    
class camera:
    def __init__(self, pixel):
        self.pixel=pixel

    def chnge_lens(self):
        pass

class powerbank:
    def __init__(self, capacity):
        self.capacity=capacity

    def charge(self):
        pass



# inheritance example

my_phone = phone('iphone', 12000, 'black', 'USA', True)
print(my_phone.phone_call(881234567890, 'Hello from my phone'))