for j in range(int(input())):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    a1 = a
    if(k==1):
        print("yes")
    else:
        while(True):
            s = 0
            for i in range(n-k):
                if(a1[i] > a1[k+i]):
                    a1[i],a1[k+i] = a1[i+k],a1[i]
                    s= 1   
            if(s == 0):
                break
            
        for i in range(n-1):
            if(a[i]>a[i+1]):
                print("no")
                break
        
        if(i==n-2):
            print("yes")