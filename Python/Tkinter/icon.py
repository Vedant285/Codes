from tkinter import *
from PIL import ImageTk,Image
root=Tk()
root.title("Welcome here")
root.iconbitmap('77.png')
my_img=ImageTk.PhotoImage(Image.open('77.png'))
my_label=Label(image=my_img).grid(row=0,column=0,columnspan=3)

left=Button(root,text="<<")
button_quit=Button(root,text="Exit",command=root.quit)   #exit button
right=Button(root,text=">>")

right.grid(column=0,row=1)
button_quit.grid(column=1,row=1)
left.grid(column=2,row=1)


root.mainloop()