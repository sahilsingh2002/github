#Attributes of label and pack


from tkinter import *
root=Tk()
root.geometry("1200x567")
root.title("Sahil GUI")    # changes title


#Important label options

'''text=""    adds text
bd=""  background color
fg=""  foreground color
font="" changes font
padx="" x padding
pady={"" y padding
relief ="" bordewr styling(SUNKEN, RAISED, RIDGE, GROOVE'''

title_label=Label(text="run run run run run run run run run run ",bg="blue",fg="white", padx="54", pady=113, font=("Times New Roman",19,"bold","italic"),borderwidth=3,relief=SUNKEN)

#other way== font= Times new roman 19 bold italic

#Important pack options
#anchor=nw
#moves text as in compasss poles
#side=BOTTOM, moves thing bottom
#fill=X,Y----- stretches the whole thing in an axis
#padx=number--- pads the text in an axis
#pady=number---


title_label.pack(side=BOTTOM,anchor="ne",fill=X,padx=13,pady=13)

root.mainloop()