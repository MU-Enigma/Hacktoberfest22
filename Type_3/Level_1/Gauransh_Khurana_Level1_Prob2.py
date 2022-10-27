n = input()

lis = [n]
ans = n
while(1):
    check = ans
    ans = 0
    for i in check:
        x = int(i)
        ans = ans + x*x
    ans = str(ans)
    if ans=='1':
        print("true")
        exit()
    elif ans in lis:
        print("false")
        exit()
    lis.append(ans)