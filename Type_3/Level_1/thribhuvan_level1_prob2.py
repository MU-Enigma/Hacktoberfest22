n=int(input())


l=[]
while(1):
    l.append(n)
    
    temp=n
    sum=0
    while(temp!=0):
        sum+=(temp%10)*(temp%10)
        temp=int(temp/10)

    if(sum==1):
        print("yes")
        exit()

    elif(sum in l):
        print("no")
        exit()
        
    n=sum
    