n = int(input())
a = list(map(int,input().split()))[:n]
new = []
dct = {}
sum = 0
for i in a:
    if i in dct:
        dct[i] = dct[i] + 1
    else:
        dct[i] = 1
# print(f"{dct}")
for key,value in dct.items():
    if key != value:
        if key > value:
            sum = sum + value
        else:
            val = value - key
            sum = sum + val
print(sum)

# n = int(input())
# a = list(map(int,input().split()))[:n]
# new = []
# sum = 0
# for i in a:
#     if i not in new:
#         cnt = a.count(i)
#         if i != cnt:
#             if i>cnt:
#                 sum = sum + cnt
#             else:
#                 val = cnt - i
#                 sum = sum + val
#             new.append(i)
#         else:
#             new.append(i)
# print(sum)