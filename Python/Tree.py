
import turtle
v=turtle.Turtle()
v.screen.bgcolor('black')
v.pensize(2)
v.color('green')
v.left(98)
v.backward(100)
v.shape('turtle')
def tree(i):
    if i<10:
        return
    else:
        v.forward(i)
        v.color('orange')
        v.circle(2)
        v.color('brown')
        v.left(30)
        tree(3*i/4)
        v.right(60)
        tree(3*i/4)
        v.left(30)
        v.backward(i)
tree(100)
turtle.done()     