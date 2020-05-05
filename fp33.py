t = int(input())
for _ in range(t):
     n=int(input())
     if(((n//2)%2)!=0):
         print("NO")
     else:
         v=[]
         c=0
         s=0
         for i in range(n//2):
             q=(i+1)*2
             v.append(q)
             c+=q
      
         for i in range(n//2,n-1):
             p=2*(i-n//2+1)-1
             v.append(p)
             s+=p
         v.append(c-s)
         print("YES")
         for i in v:
             print(i,end=" ")
         print(end="\n")