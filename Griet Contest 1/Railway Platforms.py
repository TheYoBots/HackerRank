a=int(input())
if a<0:
    print('Wrong Input.')
elif a==0:
    print('No platforms have Green Signal.')
else:
    b=bin(a)
    c=b.count('0')
    print(f'{c-1} platforms have Green Signal.')