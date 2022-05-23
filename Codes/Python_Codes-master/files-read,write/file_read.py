file = open("filetype.txt","r")
for i in range(21):
    print(file.read(5))
file.close()

#it will read 5 line of words