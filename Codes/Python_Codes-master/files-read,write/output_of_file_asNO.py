file = open("filetype.txt","r")
for line in file:
    if line[-1]=="\n":
        print(line[0]+str(len(line)-1))
    else:
        print(line[0]+str(len(line)))

#TODO
"""#same goes for this
for line in file:
    xz=line[0]
    xs=len(line)-1
    xa=str(xz)
    xb=str(xs)
    xn=xa+xb
    print(xn)
"""

"""# check this code to work
your code goes here
x= file.readlines()
names=[]
length = len(x)

for i in x:
    if length>1:
        a=i[0]
        b=str(len(i)-1)
        c=a+b
        names.append(c)
    else:
        a=i[0]
        b=str(len(i))
        c=a+b
        names.append(c)
for i in names:
    print(i)"""

file.close()