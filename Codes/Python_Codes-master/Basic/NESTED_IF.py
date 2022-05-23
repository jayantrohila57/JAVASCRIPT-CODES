n = int(input("ENTER THE NUMBER : "))

if n >10:
    print("NUMBER IS GREATER THAN 10")
    if n % 2 == 0:
        print("NUMBER IS EVEN")
    else:
        print("NUMBER IS ODD")
else:
    print("NUMBER IS SMALLER OR EQUAL TO 10")
    