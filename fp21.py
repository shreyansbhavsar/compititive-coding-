a,b,c = map(int,input().split())
if(a==b):
	ans=a+b+2*c
else:
	ans=min(a,b)*2+2*c+1
print(ans)