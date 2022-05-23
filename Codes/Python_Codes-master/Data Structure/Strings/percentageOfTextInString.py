try:
    x = (input())
    y = (input())
    w = int(x.count(y))
    z = int(x.count(''))
    pcr = int((w/(z-1))*100)
    print(pcr)
except ZeroDivisionError:
    print()



