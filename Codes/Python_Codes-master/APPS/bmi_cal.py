#bmi calculator 
try:
    w = float(input("ENTER WEIGHT IN KG"))
    h = float(input("ENTER HEIGHT IN METERS"))

    x = w/h**2  
    if x < 18.5 :
        print("Underweight")
    elif x>=18 and x<25:
        print("Normal")
    elif x>=25 and x<30:
        print("Overweight")
    elif x>=30: 
        print("Obesity")
except ValueError:
    print()