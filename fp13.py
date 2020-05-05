from math import *
for i in range(int(input())):
    a,b,c,d,k=map(int,input().split())
    a=ceil(a/c)
    b=ceil(b/d)
    print(a,b)if a+b<=k else print(-1)