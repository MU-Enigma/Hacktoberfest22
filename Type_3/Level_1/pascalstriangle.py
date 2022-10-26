from math import factorial

no = int(input("No of Rows for Pascal's Triangle: "))

if 1 <= no <= 30:  
    for i in range(no):
        for j in range(no-i+1):
            print(end=" ")
            
        for j in range(i+1):
            print(factorial(i)//(factorial(j)*factorial(i-j)), end=" ")
        print()
        
else:
    print ("Enter a no between 1 and 30!")
