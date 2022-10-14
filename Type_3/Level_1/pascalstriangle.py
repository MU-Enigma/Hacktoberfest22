from math import factorial
 
numRows= input()
numRows = int(numRows)
if 1 <= numRows <= 30:
    for i in range(numRows):
    for j in range(numRows-i+1):
        print(end=" ")
 
    for j in range(i+1):
 
        print(factorial(i)//(factorial(j)*factorial(i-j)), end=" ")
 
    print()
    else:
        print  "Enter a number between 1 and 30!"