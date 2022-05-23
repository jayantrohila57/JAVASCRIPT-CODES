try:
    print('hello')
    print(1/0)
except ZeroDivisionError:
    print('division error')
finally:
    print('this code will run no matter what')