# Python3 program to check a number
# is a Happy number or not

# Utility method to return
# sum of square of digit of n
def numSquareSum(n):
	squareSum = 0
	while(n):
		squareSum += (n % 10) * (n % 10)
		n = int(n / 10)
	return squareSum


def isHappynumber(n):

	# initialize slow
	# and fast by n
	slow = n
	fast = n
	while(True):

		slow = numSquareSum(slow)
		fast = numSquareSum(numSquareSum(fast))
		if(slow != fast):
			continue
		else:
			break
	return (slow == 1)
n = int(input(""))
if (isHappynumber(n)):
	print("true")
else:
	print("false")
