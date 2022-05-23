while(1):
    print("\n enter a number (<=100) to find it's square")
    print("press 0 to exit :")
    num = int(input())
    if num == 0:
        print("program's end ")
        break
    elif num > 100:
        print("number is greater than 100")
        continue
    print("\n Square of ", num , "is" , num * num)
