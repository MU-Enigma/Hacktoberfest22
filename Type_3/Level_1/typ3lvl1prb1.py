from math import factorial

numero = int(input("Numero of Rows for Pascal's Triangle: "))

if 1 <= numero <= 30:  
    for i in range(numero):
        for j in range(numero-i+1):
            print(end=" ")
            
        for j in range(i+1):
            print(factorial(i)//(factorial(j)*factorial(i-j)), end=" ")
        print()
        
else:
    print ("Enter a numero between 1 and 30!")
