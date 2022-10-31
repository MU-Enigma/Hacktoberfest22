n = float(input("Enter a number: "))
a = 1.0

if n==0:
        print('0')

while(1):
	b = a*a
	if  n-0.1 < b < n+0.1 :
		break
	else:
		pass
	a = a + 0.01

print(int((round(a,2))) )
