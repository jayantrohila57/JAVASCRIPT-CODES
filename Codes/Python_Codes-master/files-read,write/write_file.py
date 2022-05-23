file = open("filetype.txt","w")
file.write("this has been written to a file")
file.close()

file = open("filetype.txt","r")
print(file.read())
file.close()

