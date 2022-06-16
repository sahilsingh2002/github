from tkinter import *
from tkinter.font import ITALIC
from turtle import title
root=Tk()
root.title("Newspaper")
root1=Label(text="HINDUSTAN TIMES",font=("Times new roman",45,"bold"),borderwidth=5,relief=SUNKEN,bg="grey")
root1.pack(anchor="n")
root2=Label(text="Breaking news updates March 1, 2022: \nRead latest news, breaking news, latest updates, live news, top headlines, breaking business news and top news of the hour.",font=("Algerian",19,"italic"),fg="black",bg="red")
root2.pack(anchor="n",pady=34)







root.mainloop()