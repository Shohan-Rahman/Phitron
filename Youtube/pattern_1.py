#  *
#  * *
#  * * *
#  * * * *

# for i in range(1,5):
#     for j in range(i):
#         print("*",end = " ")
#     print()

for row in range(5):
    for column in range(row+1):
        print("*",end = " ")
    print()