s = input()
total = 0
count_L = 0
count_R = 0
p = []
q = []
for i in s:
    if i == 'L':
        count_L = count_L + 1
        p.append(i)
    elif i == 'R':
        count_R = count_R + 1
        p.append(i)
    if count_L == count_R:
        total = total + 1
        q.append(''.join(p))
        p.clear()
        count_L = 0
        count_R = 0
print(total)
for i in q:
    print(i)
    