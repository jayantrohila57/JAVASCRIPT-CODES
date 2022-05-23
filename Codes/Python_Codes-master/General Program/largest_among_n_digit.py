#TODO: solve the problem

try:
    def input_(_2):
        _2=int(input(':'))
    
    def compair(x,y):
        if x > y:print(x)
        else:print(y)

    num = int(input('Enter the amount of numbers\n you want to enter: '))
    for i in range(0,num+1):
        input_(i)
        compair(i,input_(i))
        print()


except ValueError:
    print() 