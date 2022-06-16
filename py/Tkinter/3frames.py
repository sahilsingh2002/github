from textwrap import fill
from tkinter import *

root=Tk()
root.geometry("655x333")
f1=Frame(root,bg="grey",borderwidth=6,relief=SUNKEN)        #frame makes background frames
f1.pack(side=LEFT)
l=Label(f1,text="Tkinter GUI")
l.pack(pady=50,padx=50,fill="y")


root.mainloop()