n = int(input())
array = list(map(int,input().strip().split()))[:n]
r = n[::-1]
if n==r:
    print("YES")
else:
    print("NO")