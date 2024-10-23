n = int(input())
array = list(map(int,input().strip().split()))[:n]
array_1 = array[::-1]
if array == array_1:
    print("YES")
else:
    print("NO")