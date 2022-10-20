from math import factorial
numRows = 8
for x in range(numRows):
    for y in range(numRows - x + 1):
        print(end=" ")
    for y in range(x + 1):
        print(factorial(x) // (factorial(y) * factorial(x - y)), end=" ")
    print()