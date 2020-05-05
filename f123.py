t=int(input())
while(t!=0):
    n,a,b=map(int,input().split())
    s=''
    for i in range(n):
        s+=chr((i%b)+97)
    print(s)
    t=t-1