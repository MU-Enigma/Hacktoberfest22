n = input("Enter a number ")

for _ in range(0,232):
    n = sum([int(x)**2 for x in str(n)])

if n == 1:
    print("True")
else:
    print("False")