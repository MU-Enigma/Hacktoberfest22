n = int(input())

if n==1 or n==0:
    print(n)
    exit(1)
i = 2
while(1):
    if n==i*i:
        print(i)
        exit(1)
    elif n<i*i:
        print(i-1)
        exit(1)
    i+=1