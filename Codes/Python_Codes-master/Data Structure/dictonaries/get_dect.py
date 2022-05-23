dict = {1:"apple","orange":[2,3,4],True:False,12:"True",}
print(len(dict))
print(dict.get("orange"))
print(dict.get(True))
print(dict.get(7,42))
print(dict.get(12345,"not found"))

