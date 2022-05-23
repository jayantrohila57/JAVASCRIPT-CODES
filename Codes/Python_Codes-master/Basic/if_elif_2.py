bill_amt = int(input("ENTER THE BILL AMOUNT :"))
if bill_amt >= 5000:
    bill_amt = bill_amt - 500
elif bill_amt >= 4000 and bill_amt <=4999:
    bill_amt = bill_amt - 400
elif bill_amt >= 3000 and bill_amt <=3999:
    bill_amt = bill_amt - 300
elif bill_amt >= 2000 and bill_amt <=2999:
    bill_amt = bill_amt - 200
elif bill_amt >= 1000 and bill_amt <=1999:
    bill_amt = bill_amt - 100
elif bill_amt >= 500 and bill_amt <=999:
    bill_amtl = bill_amtl - 50
print("final bill amount after te discount is",bill_amt)