for _ in range(int(input())):
    b, p, f = map(int, input().split())
    h, c = map(int, input().split())
    if h < c:
        h, c = c, h
        p, f = f, p
    x = min(p, b//2)
    y = min(f, (b-2*x)//2)
    print(h*x + c*y)
    