try:
    n = 1
    b = 0
    print(1/0)
    print ( 'done calculation ')
except ZeroDivisionError:
    print('zero diviseion error ')