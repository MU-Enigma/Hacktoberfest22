from math import factorial
num = int(input("Enter number of rows for Pascal's Triangle"))
if 1 <= num <= 30:  
    for i in range(num):
        for j in range(num-i+1):
            print(end=" ")
        for j in range(i+1):
            print(factorial(i)//(factorial(j)*factorial(i-j)), end=" ")
        print()
else:
    print ("Enter a number between 1 and 30!")
