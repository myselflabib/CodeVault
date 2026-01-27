'''
Write a Class ‘Train’ which has methods to book a ticket, get status (no of seats) and get fare information of train running under Bangladesh Railways.
'''

from random import randint
class Train:
    def __init__(self, trainno):
        self.trainno = trainno
    def bookTicket(self, fro, to):
        print(f"Ticket is book in train number: {self.trainno} from {fro} to {to}.")

    def getStatus(self):
        print(f"Train number {self.trainno} is running on time.")

    def getfare(self, fro, to):
        print(f"Ticket fare in train number {self.trainno} from {fro} to {to} is {randint(100, 600)}.")

p = Train(1234)
p.bookTicket("Kurigram", "Dhaka")
p.getStatus()
p.getfare("Kurigram", "Dhaka")