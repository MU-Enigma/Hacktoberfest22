from math import factorial

r=int(input("How many rows would you like?"))
print("[",end="")
for a in range(r):
    if a in range(r-1):
        print(end="[")
        for b in range(a+1):
            if b in range(a):
                pascal=(factorial(a)//(factorial(a-b)*factorial(b)))
                print(pascal,end=",")
            else:
                pascal=(factorial(a)//(factorial(a-b)*factorial(b)))
                print(pascal,end="")
        print(end="],")
    else:
        print(end="[")
        for b in range(a+1):
            if b in range(a):
                pascal=(factorial(a)//(factorial(a-b)*factorial(b)))
                print(pascal,end=",")
            else:
                pascal=(factorial(a)//(factorial(a-b)*factorial(b)))
                print(pascal,end="")
        print(end="]")
        
print("]")


