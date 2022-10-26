import math

def Square(n, i, j):
	mid = (i + j) / 2
	mul = mid * mid
	if ((mul == n) or (abs(mul - n) < 0.00001)):
		return mid
	elif (mul < n):
		return Square(n, mid, j)
	else:
		return Square(n, i, mid)

#using recursion to find square root 
def findSqrt(n):
	i = 1
	found = False
	while (found == False):
		if (i * i == n):
			print(i)
			found = True
		
		elif (i * i > n):
			res = Square(n, i - 1, i)
			print ("{0:.5f}".format(res))
			found = True
		i += 1

n=int(input("Please enter the number you want sqaure root of: "))
findSqrt(n)

