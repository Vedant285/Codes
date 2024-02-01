from tkinter import *

root=Tk()

def myClick():
    mylabe1=Label(root,text="Click on the button to proceed ")
    mylabe1.pack()

#creating a button on screen
# first the directory and second the text but we can add mode parameters like state,fg
#fg is used to chage colour of the text 
#bg colour the background of the button
myButton=Button(root,text="Click here and see the magic  ",command=myClick,fg="Green",bg="yellow")

#this button is disabled means we cannot click on it 
myButton2=Button(root,text="click here",state=DISABLED)

#we can change its size y using padx and pady parameters
myButton3=Button(root,text="Click here ",padx=50,pady=50)

myButton.pack()
myButton2.pack()
myButton3.pack()

root.mainloop()