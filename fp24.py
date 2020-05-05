t=int(input())
for _ in range(t):
	a=int(input())
	n =int(input())
	c =input()
	if(c=='L'):
		ans = a
		for i in range(n):
			ans=ans<<1
	else:
		ans = a>>n
	print(ans)