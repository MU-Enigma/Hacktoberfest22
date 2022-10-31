def sq(n,i,j):
	mid = (i+j)/2
	mul = mid*mid
	
	if ((mul == n) or (abs(mul-n) < 0.00001)):
		return mid
	elif mul < n:
		return sq(n,mid,j)
	else:
		return sq(n,i,mid)
		
def findsq(n):
	i = 1
	
	found = False
	while (found == False):
		if (i * i == n):
			print("The square root of ", end = "")
			print(n, end = " is ")
			print(i)
			found = True
		elif (i * i > n):		
			res = sq(n,i-1,i)
			res = int(res)
			print("The square root of ", end = "")
			print(n, end = " is ")
			print(res)
			found = True
		i += 1
if __name__ == "__main__":
	n = int(input("Enter the number whose square root you want to know: "))
	findsq(n)
		
