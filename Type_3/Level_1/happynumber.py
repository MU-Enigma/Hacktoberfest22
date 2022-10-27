def isHappyNumber(num):    
    rem = sum = 0;    
        
    #Calculates the sum of squares of digits    
    while(num > 0):    
        rem = num%10;    
        sum = sum + (rem*rem);    
        num = num//10;    
    return sum;    
        
num = int(input("Enter number"));    
result = num;    
     
while(result != 1 and result != 4):    
    result = isHappyNumber(result);    
     
#Happy number always ends with 1    
if(result == 1):    
    print("true");    
#Unhappy number ends in a cycle of repeating numbers which contain 4    
elif(result == 4):    
    print("false");   
