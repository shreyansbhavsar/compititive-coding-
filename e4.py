def shrey(a):
    a.sort()
    m = int("1000")
    for i in range(len(a)-1):
        p = (a[i] & a[i+1])
        s = (a[i] | a[i+1])
        m  = min(m, p ^ s)
    return m


t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    print(shrey(a)) 