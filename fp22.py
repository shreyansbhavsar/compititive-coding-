n=int(input())
a=list(map(int,input().split()))
ans1=a.rindex(0)
ans2=a.rindex(1)
ans= min(ans1,ans2)+1
print(ans)