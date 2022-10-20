
def findTripl(nums, n, Sum):
	a = 0
	b = 0
	c = 0
	
	tripl = []
	
	uniqTripl = []

	temp = ""
	
	newTripl = [0, 0, 0]
	
	nums.sort()
	
	for a in range(n - 2):
			
		b = a + 1

		c = n - 1

		while(b < c):
					
			if(nums[a] + nums[b] + nums[c] == Sum):
				temp = str(nums[a]) + ":" + str(nums[b]) + ":" + str(nums[c])
				if temp not in uniqTripl:
					uniqTripl.append(temp)
					newTripl[0] = nums[a]
					newTripl[1] = nums[b]
					newTripl[2] = nums[c]
					tripl.append(newTripl)
					newTripl = [0, 0, 0]

				b += 1
				c -= 1
						
			elif(nums[a] + nums[b] + nums[c] > Sum):
				c -= 1
			else:
				b += 1

	if(len(tripl) == 0):
		return 0
	
	for a in range(len(tripl)):
		print(tripl[a], end = ", ")
	return 1

nums = input("Enter values: ")
n = len(nums)
Sum = 0
for i in nums:
    Sum += i

if(not findTripl(nums, n, Sum)):
	print("No triplets can be formed.")


