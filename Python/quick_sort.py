from tkinter import *

def qs(arr,low,high):
    i=low-1
    pivot=arr[high]
    for j in range(low,high):
        if arr[j] <= pivot:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[high]=arr[high],arr[i+1]
    return i+1

def quick_sort(arr,low,high):
    if low<high:
        pivot=qs(arr,low,high)
        quick_sort(arr, low, pivot-1)
        quick_sort(arr, pivot+1, high)


#if __name__=='main':
n=int(input("Enter the size of array "))
arr=[0]*n
for i in range(n):
    arr[i]=int(input())
quick_sort(arr,0,n-1)

#print(arr)
root=Tk()
def clickhere():
    but=Label(root,text=arr).pack()    
label1=Button(root,text="Click here to see the sorted array ",command=clickhere,fg="Red",padx=20,pady=30).pack()

root.mainloop()