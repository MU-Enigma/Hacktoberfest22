def isHappyNumber(num):  
    rem = sum = 0;  

    while(num > 0):  
        rem = num%10;  
        sum = sum + (rem*rem);  
        num = num//10;  
    return sum;  
      

if __name__ == "__main__":
    num = int(input("Enter a Number to Determine its Happy status\n-->"))  
    result = num;  
    
    while(result != 1 and result != 4):  
        result = isHappyNumber(result);  

    if(result == 1):  
        print("true");  
    elif(result == 4):  
        print("false");     