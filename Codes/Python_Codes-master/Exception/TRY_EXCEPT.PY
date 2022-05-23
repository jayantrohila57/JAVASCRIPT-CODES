try:
    var = 10
    print(var + 'hello')
    print(var / 2)
except ZeroDivisionError:
    print('divisible by zero')
except (ValueError,TypeError):
    print('error occurred')