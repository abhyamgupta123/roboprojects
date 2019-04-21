import cv2
import time
video=cv2.VideoCapture(0)
a=0
while True:
    a+=1
    check,img=video.read()
    face_cascade = cv2.CascadeClassifier('C:\\Users\\Abhyam Gupta\\AppData\\Local\\conda\\conda\\pkgs\\libopencv-3.4.1-h875b8b8_3\\Library\\etc\\haarcascades\\haarcascade_frontalface_default.xml')
    # eye_cascade = cv2.CascadeClassifier('C:\\Users\\Abhyam Gupta\\AppData\\Local\\conda\\conda\\pkgs\\libopencv-3.4.1-h875b8b8_3\\Library\etc\\haarcascades\\haarcascade_eye.xml')

#     img = cv2.imread("C:\\Users\\Abhyam Gupta\\Downloads\\DSC_5544.jpg")
    # img=cv2.resize(rimg,(400,600))
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    faces = face_cascade.detectMultiScale(gray, scaleFactor=1.5, minNeighbors=5)
    for x,y,w,h in faces:
        img=cv2.rectangle(img,(x,y),(x+w,y+h),(0,255,0),3)
#     resized=cv2.resize(img,(800,1200))
    '''
    for (x,y,w,h) in faces:
        img = cv2.rectangle(img,(x,y),(x+w,y+h),(255,0,0),2)
        roi_gray = gray[y:y+h, x:x+w]
        roi_color = img[y:y+h, x:x+w]
        eyes = eye_cascade.detectMultiScale(roi_gray)
        for (ex,ey,ew,eh) in eyes:
            cv2.rectangle(roi_color,(ex,ey),(ex+ew,ey+eh),(0,255,0),2)
    '''
    cv2.imshow('gmg',img)
    #     gray=cv2.cvtColor(frame,cv2.COLOR_RGB2GRAY)
#     cv2.imshow("abhyam",frame)
    Key=cv2.waitKey(2)
    if Key==ord('q'):
        break
print(a)

video.release()
