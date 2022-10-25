def Single( ar, n):
	
	res = ar[0]
	
	for i in range(1,n):
		res = res ^ ar[i]
	
	return res

ar = []
n = int(input("Enter number of elements : "))

for i in range(0, n):
	ele = int(input())

	ar.append(ele) 
	
print ("Element occurring once is", Single(ar, len(ar)))


