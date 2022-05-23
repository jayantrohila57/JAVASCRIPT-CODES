try:
    file=open("filetype.txt","r")
    print(file.read())
finally:
    file.close()
