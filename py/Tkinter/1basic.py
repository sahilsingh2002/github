#import tkinter as Tk
'''tkinter-- Toolkit
Tk-- short hand given(Can be changed)
tk= Widgets in toolkit
more ways to import---->
1)from tkinter import *--> * means all, (Used when many groups are used
2)import tkinter-->(we have to write Tkinter always'''
from tkinter import *

Sahil_root=Tk()
#gui logic
#Tk makes basic gui
#mainloop=Gui window maker and logic remembered by it
Sahil_root.geometry("444x234")    #width X Height
#Sahil_root.maxsize(1000,500)      #max size of window(width,height)
#Sahil_root.minsize(200,200)       #min size of window(width,height)

sahil=Label(text="Sahil Singh kuch bhi likhde") #Title Text
sahil.pack() # main thing needed for text to be seen
photo=PhotoImage(file = "6c8e81936a53ccc42f50ebc189fefb60.png")


sahil_label=Label(image=photo)
sahil_label.pack()

Sahil_root.mainloop()