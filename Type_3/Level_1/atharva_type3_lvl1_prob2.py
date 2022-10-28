def isHappyNumber(n):  
    r = s = 0;  
    while(n > 0):  
        r = n%10;  
        s = s + (r*r);  
        n = n//10;  
    return s;  
if __name__ == "__main__":
    n = int(input("Enter a Number\n-->"))  
    result = n;  
    while(result != 1 and result != 4):  
        result = isHappyNumber(result);  
    if(result == 1):  
        print("true");  
    elif(result == 4):  
        print("false");     
