import math
n = input("Input : ")

#equation x^2 - n = 0
def func( x ):
	return x*x - float(n)

#derivative of the above function
def derivFunc( x ):
	return 2*x

# function to find the root of the equation
# newton raphson method (iterations)
def sqrt( x ):
	r = func(x) / derivFunc(x)
	while abs(r) >= 0.00001:
		r = func(x)/derivFunc(x)
		
		# x(i+1) = x(i) - f(x) / f'(x)
		x = x - r # the iterative formula

	print("Output : " + str(math.floor(x)))
    #floor is used to truncate the decimal part

x0 = 1 # Initial values assumed to start iteration
sqrt(x0)