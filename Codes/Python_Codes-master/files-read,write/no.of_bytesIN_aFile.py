msg = "hello world"
file = open("filetype.txt","w")
am = file.write(msg)
print(am)
file.close()
