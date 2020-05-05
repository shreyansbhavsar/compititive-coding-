t=int(input())
for _ in range(t):
	n,a,b=map(int,input().split()) 
	c=list(map(int,input().split()))
	d=list(map(int,input().split()))
	if(max(c)>=max(d)):
		print("YES")
	else:
		print("NO")