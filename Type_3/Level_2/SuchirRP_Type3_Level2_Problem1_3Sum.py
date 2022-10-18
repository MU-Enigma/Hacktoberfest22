#usr/bin/python3.10

def threesum(nums):
	res = set()

	nega, posi, zero = [], [], []
	for num in nums:
		if num > 0:
			posi.append(num)
		elif num < 0:
			nega.append(num)
		else:
			zero.append(num)

	Neg, Pos = set(nega), set(posi)

	if zero:
		for num in Pos:
			if -1*num in Neg:
				res.add((-1*num, 0, num))

	if len(zero) >= 3:
		res.add((0,0,0))

	for i in range(len(nega)):
		for j in range(i+1,len(nega)):
			targ = -1*(nega[i]+nega[j])
			if targ in Pos:
				res.add(tuple(sorted([nega[i],nega[j],targ])))

	for i in range(len(posi)):
		for j in range(i+1,len(posi)):
			targ = -1*(posi[i]+posi[j])
			if targ in Neg:
				res.add(tuple(sorted([posi[i],posi[j],targ])))

	return res

str = input("Enter space seperated integers: ")
arr = str.split()
for i in range(len(arr)):
    arr[i] = int(arr[i])
print(threesum(arr))

#Input Format: Enter a series of integers, seperated by spaces in the same line. Ex:- -1 0 1 2 -1 -4
