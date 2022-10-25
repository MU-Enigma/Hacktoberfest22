def problem_fun( array_, n_):
	res = array_[0]
	for i in range(1,n_):
		res = res ^ array_[i]
	return res

array_in = []
n = int(input("no of elem:"))
for i in range(0, n):
	el = int(input())
	array_in.append(el) 
print("els occuring just once: ", problem_fun(array_in, len(array_in)))
