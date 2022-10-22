n = input("Enter a number ")

for _ in range(0,232): #constraint
    n = sum([int(x)**2 for x in str(n)]) #sum of squares of digits

#for output
if n == 1:
    print("True")
else:
    print("False")
    