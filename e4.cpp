


t = int(input())
for i in range(t):
    n = int(input())
for i in range(n-1):
    a[i] = int(input())
  a.sort()
    m = 10000;
    for i in range(n-1):
        p=(a[i] & a[i+1])
        s=(a[i] | a[i+1])
        m=min(m, p ^ s)
    print m;
    
    