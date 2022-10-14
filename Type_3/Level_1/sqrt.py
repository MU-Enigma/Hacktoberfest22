num = float(input("Enter num: "))
num1 = abs(num)
a = 1.0

while(1):
	b = a*a
	if  num1-0.1 < b < num1+0.1 :
		break
	else:
		pass
	a = a + 0.01


print("\n Square root value is: ",round(a))