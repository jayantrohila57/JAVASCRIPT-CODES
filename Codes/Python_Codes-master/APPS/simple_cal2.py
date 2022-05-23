import math

int1 = int(input('ENTER THE 1st VALUE:'))
int2 = int(input('ENTERE THE 2nd VALUE:'))
print("ENTER YOUR CHOISE")
print("1:ADD, 2:SUB, 3:MUL, 4:DIV ")
int0 = int(input(":"))
if  (int0 == 1):
    print("YOUR ANSWER IS :", int1 + int2)
elif (int0 == 2):
    print("YOUR ANSWER IS :", int1 - int2)
elif (int0 == 3):
    print("YOUR ANSWER IS :", int1 * int2)
elif (int0 == 4):
    print("YOUR ANSWER IS :", int2 / int1)
else:
    print("YOUR ENTER AN  INVALID NUMBER!")

    