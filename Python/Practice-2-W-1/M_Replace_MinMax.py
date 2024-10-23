n = int(input())
arr = list(map(int,input().strip().split()))[:n]

max_val = arr.index(max(arr))
min_val = arr.index(min(arr))

arr[max_val],arr[min_val] = arr[min_val],arr[max_val]
for i in arr:
    print(i,end=" ")
