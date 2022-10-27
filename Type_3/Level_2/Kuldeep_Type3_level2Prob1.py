def findTriplets(nums, n, Sum):
	i = 0
	j = 0
	k = 0
	triplet = []
	uniqTriplets = []
	temp = ""
	newTriplet = [0, 0, 0]
	nums.sort()
	for i in range(n - 2):
		j = i + 1
		k = n - 1

		while(j < k):
			if(nums[i] + nums[j] + nums[k] == Sum):
				temp = str(nums[i]) + ":" + str(nums[j]) + ":" + str(nums[k])
				if temp not in uniqTriplets:
					uniqTriplets.append(temp)
					newTriplet[0] = nums[i]
					newTriplet[1] = nums[j]
					newTriplet[2] = nums[k]
					triplet.append(newTriplet)
					newTriplet = [0, 0, 0]
				j += 1
				k -= 1
			elif(nums[i] + nums[j] + nums[k] > Sum):
				k -= 1
			else:
				j += 1

	if(len(triplet) == 0):
		return 0
	for i in range(len(triplet)):
		print(triplet[i], end = ", ")
	return 1

nums = []
n = int(input())
for i in range(n):
    key = int(input())
    nums.append(key)
n = len(nums)
Sum = 0

if(not findTriplets(nums, n, Sum)):
	print("No triplets can be formed.")

