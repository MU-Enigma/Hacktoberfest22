num=int(input())
i=1
while(1):
    if(num==i*i):
        print(i)
        exit()

    elif(num<(i-1)*(i-1)):
        print(i-2)
        exit()

    i+=1