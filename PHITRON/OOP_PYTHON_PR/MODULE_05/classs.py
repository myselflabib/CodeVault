def call():
    print("Calling someone")
    print("call done")

class Phone:
    price=19000
    color="Yellow"
    Brand="Infinix"
    feature=['camera', 'speaker', 'hammer']

    def call(self):
        print("Calling SOmeone from class")


myPhone=Phone()

print(myPhone.Brand)

myPhone.call()


