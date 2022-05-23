import tkinter
root = tkinter.Tk()
root.title('TASK IS NOT RESPONDING!')

btn = tkinter.Button(root, text ="QUIT!",width=8,command = root.quit)
btn.pack(pady = 10)
root.geometry("450x250+300+300")
root.mainloop()
