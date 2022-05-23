a=[]
n = int(input('ENTER THE NO. OF ELEMENT'))
for i in range(1,n+1):
    b = int(input('ENTER THE ELEMENT='))
    a.append(b)
a.sort()
print('LARGEST ELEMENT IS =',a[n-1])