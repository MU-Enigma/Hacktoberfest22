a = int(input("Enter no: "))
sqrt = 1.0
while(1):
	sqr = sqrt*sqrt
	if  a-0.1 < sqr < a+0.1 :
		break
	else:
		pass
	sqrt = sqrt + 0.01
print("The square root is:",int(sqrt))
