import cv2
import numpy as np
import tkinter as tk 
from tkinter import filedialog
from PIL import Image,ImageTk

def emojify(image_source):
    image=cv2.imread(image_source)
    gray_image=cv2.cvyColor(image,cv2.COLOR_BGR2GRAY)
    smooth_image=cv2.medianBlur(gray_image, 5)
    edges=cv2.adaptiveThreshold(smooth, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, 9, 9)
    color_image=cv2.bilateralFilter(image, 9, 300, 300)
    cartoon_image=cv2.bitwise_and(color_image, color_image,mask=edges)
    return cartoon_image
    

def open_image():
    file_path=filedialog.askopenfile()
    if file_path:
        cartoon_image=emojify(file_path)
        show_image(cartoon_image)
    
def show_image(image):
    image_rgb=cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
    pil_image=Image.fromarray(image_rgb)
    img_tk=ImageTk.PhotoImage(image=pil_image)
    canvas.img_tk=img_tkcanvas.create_image(0,0,anchor=tk.NW,image=img_tk)
    

    
root=tk.Tk()
root.title("Emojify")
canvas=tk.Canvas(root,width=800,height=600)
canvas.pack()
open_button=tk.Button(root,text= "Open Image",command=open_image)
open_button.pack()
root.mainloop()
    