for p in range(int(input())):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    if(k==1):
        print("yes")
    else:
        while(True):
            s = 0
            for i in range(n-k):
                if(a[i] > a[k+i]):
                    a[i],a[k+i] = a[i+k],a[i]
                    s = 1   
            if(s == 0):
                break
            
        for i in range(n-1):
            if(a[i]>a[i+1]):
                print("no")
                break
        
        if(i==n-2):
            print("yes")