# Problem 3: Single number
'''
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

```
Example 1:

Input: nums = [2,2,1]
Output: 1
```
```
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
```
```
Example 3:

Input: nums = [1]
Output: 1
'''

nums = [2,2,1]
x = {}
for i in range(len(nums)):
	try:
		x[nums[i]]+=1
	except:
		x[nums[i]]=1
x = sorted(x.items(), key=lambda x: x[1])
Flag = True
for i in x:
	if Flag:
		print(x[0][0])
		Flag = False



