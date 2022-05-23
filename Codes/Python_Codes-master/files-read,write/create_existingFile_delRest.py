file = open("filetype.txt","r")
print("read the files lines")
print(file.read())
print("finished")
file.close()

file = open("filetype.txt","w")
file.write("some new text")
file.close()

file = open("filetype.txt","r")
print(file.read())
print("this is the changed file")
print("finished")
file.close()



