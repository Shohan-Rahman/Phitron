#  a
#  b b
#  c c c
#  d d d d


for row in range(5):
    for column in range(row+1):
        print(chr(97+row),end = " ")
    print()