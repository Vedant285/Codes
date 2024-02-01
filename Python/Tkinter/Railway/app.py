from tkinter import *
from PIL import ImageTk,Image

root=Tk()

name=Label(root,text="Name :")
nameField=Entry(root,width=50)
name.grid(row=0,column=0)

root.mainloop()