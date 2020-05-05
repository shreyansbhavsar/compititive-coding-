t=int(input())
while t>0:
    n=int(input())
    a=list(map(int,input().split()))
    d=Counter(a)
    a=max(d.values())
    b=len(d)
    if a==b:
        print(a-1)
    elif a>b:
        print(b)
    else:print(a)
    t-=1
