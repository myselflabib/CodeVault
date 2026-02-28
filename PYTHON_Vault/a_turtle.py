# import turtle

# t = turtle.Turtle()
# t.color("black")
# t.speed(5)

# for _ in range(36):
#     for _ in range(4):
#         t.forward(100)
#         t.right(90)
#     t.right(10)

# turtle.exitonclick()


import turtle

screen = turtle.Screen()
screen.bgcolor("black")

t = turtle.Turtle()
t.speed(0)
t.width(2)

colors = ["red", "orange", "yellow", "green", "cyan", "blue", "purple", "pink"]

for i in range(200):
    t.color(colors[i % len(colors)])
    t.forward(i * 2)
    t.left(59)

turtle.done()