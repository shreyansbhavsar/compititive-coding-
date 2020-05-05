x,y,z=map(int,input().split())
c='?'
if x>y+z:c='+'
if y>x+z:c='-'
if x==y and z==0:c=0
print(c)