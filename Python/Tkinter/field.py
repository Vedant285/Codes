from tkinter import *
root=Tk()
e=Entry(root,width=50,bg='Yellow')
e.pack()
root.title("Welcome")
#just like we have seen in forms the entry field contains what we have to enter , like that we can insert this to our label using insert
e.insert(5,"Enter your Name : ")
def but():
    label=Label(root,text=e.get()).pack()
    
button=Button(root,text="Click Here",command=but).pack()

root.mainloop()