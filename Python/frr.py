import cv2
import face_recognisation as fr
from PIL import Iamge,ImageDraw
img1=fr.load_image_file(" ")
img2=fr.load_image_file("")


#load image=it is used to load an image ina n array
cv2.cvtColor(img1,cv2.COLOR_BGR2RBG)
cv2.cvtColor(img2,cv2.COLOR_BGR2RBG)

# it returns an array of 128 dimensions face encodings for each face in the image 
fr.face_encodings(img1)[0]
fr.face_encodings(img2)[0]

#it returns an array of true false showing which encoding matches it 
res = fr.compare_faces([enc1],enc2)
print(res)

location=fr.face_location(img1)[0]
top,right,bottom,left=location
face=img1[top:bottom,left:right]
finalimage= Image.fromarray(face)
finalImage.show()