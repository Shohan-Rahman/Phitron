a = int(input())
rev = 0
while a>0:
    digit = a%10
    rev = rev * 10 + digit
    a //= 10
print(rev)

# --shortcut--

# a = int(input())
# while a>0:
#     digit = a%10
#     print(digit,end = "")
#     a = a//10