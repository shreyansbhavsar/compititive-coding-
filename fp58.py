# may 20 b sort walo
def swap(arr, i, j):   
    tmp = arr[i]
    arr[i] = arr[j]
    arr[j] = tmp

def minimum_swaps(arr):

    a = [x - 1 for x in arr]

    swaps = 0
    i = 0
    while i < len(a):
        if a[i] == i:
            i += 1
            continue
        swap(a, i, a[i])
        swaps += 1
    return swaps

for _ in range(int(input())):
    n,m1=map(int,input().split())
    p=list(map(int,input().split()))
    if m1==0:
        print(minimum_swaps(p))
    
