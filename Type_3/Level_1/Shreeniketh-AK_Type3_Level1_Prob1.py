
def Pascal(n) :
		
	for line in range(0, n) :
		
		
		for i in range(0, line + 1) :
			print(binom(line, i),
				" ", end = "")
		print()
	
def binom(n, x) :
	res = 1
	if (x > n - x) :
		x = n - x
	for i in range(0 , x) :
		res = res * (n - i)
		res = res // (i + 1)
	
	return res

n = int(input("Enter number of row: "))
Pascal(n)


