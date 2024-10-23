q = list(map(int,input().split()))
arr = list(map(int,input().strip().split()))
while q[1]>0:
    result = 0
    l = list(map(int,input().split()))
    for i in range(l[0],l[1]+1):
        result = result + arr[i]
    print(result)