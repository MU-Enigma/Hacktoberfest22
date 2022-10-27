import math
n = input("Enter a number : ")
def function( x ):
	return x*x - float(n)

def function1( x ):
	return 2*x

def sqrt( x ):
	y = function(x) / function1(x)
	while abs(y) >= 0.00001:
		y = function(x)/function1(x)
		
		x = x - y 

	print("The square root of the number is =  " + str(math.floor(x)))

x0 = 1 
sqrt(x0)