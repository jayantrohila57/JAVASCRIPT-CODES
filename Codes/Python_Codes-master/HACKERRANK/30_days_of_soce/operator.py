meal_cost = float(input())            
tip_percent = float(input())
tip = meal_cost * tip_percent / 100
tax_percent = float(input())
tax = meal_cost * tax_percent /100
total= (tax + tip + meal_cost)
print(int(total))