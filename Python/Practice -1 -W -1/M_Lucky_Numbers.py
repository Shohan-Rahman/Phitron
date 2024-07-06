a = list(map(int,input().strip().split()))[:2]
num1 = a[0]
num2 = a[1]
ans = []
for i in range(num1,num2+1):
    luckey = True
    num = i
    while num>0:
        n = num % 10
        if n != 4 and n != 7:
            luckey = False
            break
        num = num // 10
    if luckey == True:
        ans.append(i)
if len(ans) == 0:
    print("-1")
else:
    for i in ans:
        print(i,end=" ")
    