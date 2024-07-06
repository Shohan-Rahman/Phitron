#  153
#  digit = 3
#  so, 1^3 + 5^3 + 3^3
#     = 3 + 125 + 27
#     = 153
#  same number.

a = int(input())
length = len(str(a))
temp = a
ans = 0
while temp>0:
    digit = temp%10
    ans = ans + digit**length
    temp = temp//10
if ans == a:
    print("Armstrong Number")
else:
    print("Not Armstrong Number")

# --shortcut--

# a = input()
# length = len(a)
# ans = 0
# for i in a:
#     ans = ans + int(i)**length
# if ans == int(a):
#     print("Armstrong Number")
# else:
#     print("Not Armstrong Number")