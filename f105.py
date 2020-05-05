    t=int(input())
    while t>0:
        n,a,b=map(int,input().split())
        if n>20:
            while(a):
                n=(n/2)+10
                a-=1
                if(n<=0):
                    f=1
                    break;
            n=n-(10*b)
            if n <= 0:
                 f = 1
        elif n<=20:
            n=n-(10*b)
            if(n<=0)
                f=1
        if(f==1):
            print("YES")
        else:
            print("NO")
        t-=1