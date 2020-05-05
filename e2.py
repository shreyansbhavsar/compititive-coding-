def shrey(x,y,p,q):
    b = p*y / ( x * q)
    b1 = b2 = None
    if b == 1:
        c = p/x
        i = 1
        while True:
            val = c * i
            if int(val) == val:
                break
            i += 1
        b3 = i
        b1 = b3 * p / x
        b2 = b1
    else:
        i = 1
        while True:
            val = b * i
            if int(val) == val:
                break
            i += 1
        b2 = i
        b1 = b2 * b12_rat
        b3 = b1 * x / p
    return int(b1), int(b2), int(b3)




x,y,p,q = map(int, input().split())
b1,b2,b3 = shrey(x, y, p, q)
print(b1, end=" ")
print(b2, end=" ")
print(b3)