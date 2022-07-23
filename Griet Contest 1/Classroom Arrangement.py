import math

a=int(input())
b=math.sqrt(a)
c=1
if a<0:
    print('Wrong Input.')
elif a!=(b*b):
    print('-1')
else:
    for i in range(int(b)):
        for i in range(int(b)):
            print(c, end = ' ')
            c=c+1
        print()