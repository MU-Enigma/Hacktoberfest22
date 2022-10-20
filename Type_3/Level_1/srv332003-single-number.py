def getSingleNum(nums):
	ans=nums[0]
	for i in nums:
		if i==nums[0]:
			continue
		ans= ans^i
	return ans

nums=[4,1,2,1,2]
print(getSingleNum(nums))
