import tkinter
form PIL import Image, ImageTk

root = tkinter.Tk()
root.configura(background="grey")
root.title("Rotunda")
rot_i = Image.open("rotunda.jpg")
rotunda = ImageTk.PhotoImage(rot_i)

label = tkinter.Lable(image=rotunda)
lable.image = rotunda
lable.place(x=20,y=20)
root.mainloop()
