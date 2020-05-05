t=int(input())
for _ in range(t):
	s=input()
	s.strip('0')
	p=s.strip('0').count('0')
	print(p)