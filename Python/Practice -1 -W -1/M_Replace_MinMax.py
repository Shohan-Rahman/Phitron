n = int(input())
array = list(map(int,input().strip().split()))[:n]

max_val = array.index(max(array))
min_val = array.index(min(array))

array[max_val],array[min_val] = array[min_val],array[max_val]
for i in array:
    print(i,end=" ")