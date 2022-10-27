n = int(input("Enter the number: "))
sqrt = 1.0
while(1):
	sqr = sqrt*sqrt
	if  n-0.1 < sqr < n+0.1 :
		break
	else:
		pass
	sqrt = sqrt + 0.01
print("Square root value is:",int(sqrt))
