def fac(num):
    if num ==1:return num
    else:return num * fac(num-1)
try:
    num = int(input("Enter a number"))
    if num < 0:print("factorial cannot be found for negative numbers")
    elif num==0:print("factorial of 0 is 1")
    else:print("factorial of ",num,"is",fac(num))
except ValueError:
    print()