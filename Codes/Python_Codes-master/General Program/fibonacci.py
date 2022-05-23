def fab(n):
    if n <= 1 :
        return n
    else:
        return(fab(n-1)+fab(n-2))
nterms = 10
if nterms <= 0:
    print('enter only (+)int')
else:
    print('fibonacci sequence:')
    for i in range(nterms):
        print(fab(i))
#TODO learn more about this series 

    