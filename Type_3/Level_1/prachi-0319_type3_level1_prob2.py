n=int(input())
sum=0
flag=0
if(n>=1 and n<=((2**31)-1)):
    while(n!=0):
        rem=n%10
        sum=sum+(rem*rem)
        n=n//10
        if(n==0):
            if(sum==1):
                print(True)
            elif(sum==4):
                print(False)
            else:
                n=sum
                sum=0
        else:
            continue
        
        
