import math
t = int(input())
for _ in range (t):
	 x,y,l,r = map(int,input().split())
	 ans1 = x|y
	 if(min(x,y)==0):
	 	print(0)
	 elif(ans1<=r):
	 	print(ans1)
	 else:
	 	ans1 = max(l,r)
	 	ans = math.log(ans1,2)
	 	s = int(pow(2,ans)-1)
	 	print(int(s))