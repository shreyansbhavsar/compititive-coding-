T = int(input())
for _ in range(0,T):
    n=int(input())
    as1=(2**(n+1)-2)
    as2=(2**(n//2)-2)+2**n
    print(2*as2-as1)
 