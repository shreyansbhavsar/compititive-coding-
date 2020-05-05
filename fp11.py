for i in range(int(input())):
  a,b,n,s=map(int,input().split())
  print("YES" if (s <= a*n+b and s%n <= b) else "NO")