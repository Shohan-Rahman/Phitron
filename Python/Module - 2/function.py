def mul_it(num):
    total = num * 2
    print(total)

mul_it(5)

def sum_it(num1,num2):
    sum = num1 + num2
    print(sum)

sum_it(10,5)

num3,num4 = input().split()
def hello(num3,num4):
    first = int(num3)
    second = int(num4)
    summition = first + second
    multiplication = first * second
    return summition,multiplication

s = hello(num3,num4)
print(s)
    