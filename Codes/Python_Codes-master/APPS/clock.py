from tkinter import*
from tkinter.ttk import*
from time import strftime
root = Tk()
root.title('clock')
def time():
    string = strftime('%H:%M:%S %p')
    label.config(text=string)
    label.after(1000,time)

label = label(root, font=("arial", 80,), background = "black",foreground ="cryn")
label.pack(anchor="center")
time()
mainloop()
