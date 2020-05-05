
for _ in range(int(input())):
    s=input()
    l=s[1:len(s)]+s[0]
    r=s[len(s)-1]+s[0:len(s)-1]
    if l==r:
        print("YES")
    else:
        print("NO")
