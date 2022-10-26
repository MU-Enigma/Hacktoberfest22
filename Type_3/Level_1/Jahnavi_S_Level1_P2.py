n = input("give a input number = ")

for _ in range(0,232): 
    n = sum([int(x)**2 for x in str(n)]) #sum of squares of digits
    
if n == 1:
    print("True")
else:
    print("False")
    