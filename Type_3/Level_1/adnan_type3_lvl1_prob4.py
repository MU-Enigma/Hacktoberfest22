a = int(input("Enter number: "))
sqrt = 1.0
while(1):
	sqr = sqrt*sqrt
	if  a-0.1 < sqr < a+0.1 :
		break
	else:
		pass
	sqrt = sqrt + 0.01
print("Square root is:",int(sqrt))
