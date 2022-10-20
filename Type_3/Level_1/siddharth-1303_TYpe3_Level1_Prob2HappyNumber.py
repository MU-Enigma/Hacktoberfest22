if(num<10):
    if(num==1 or num==7):
       print("happy number")
    else:
        print("not a happy number")

elif(num >= 10):
    while(num>=10):
        s=0
        while(num > 0):    
            rem = num%10    
            s = s + (rem**2)    
            num = num//10 
            print(s)
        num=s
        
    if  s==1:
        print("happy number")
    else:
        print("not a happy number")