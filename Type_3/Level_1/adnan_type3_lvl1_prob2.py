def HappyNumber(n):    
    rem = s = 0;    
        
    while(n > 0):    
        rem = n%10;    
        s = s + (rem*rem);    
        n = n//10;    
    return s;    
        
n = int(input("Enter a number"));    
result = n;    
     
while(result != 1 and result != 4):    
    result = HappyNumber(result);    
     
if(result == 1):    
    print("true");    
elif(result == 4):    
    print("false");   
