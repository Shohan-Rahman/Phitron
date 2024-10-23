n = int(input())
a = list(map(int,input().split()))[:n]
sum = 0
i = 0
while i < len(a):
    if a[i]%2 == 1:
        break
    else:
        a[i] = a[i]//2
        sum += 1
    if i == len(a) - 1:
        i = 0
    else:
        i += 1
print(sum//len(a))