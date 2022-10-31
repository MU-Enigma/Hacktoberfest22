# Problem 3: Most frequent elements
'''Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

```
Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
```
```
Example 2:

Input: nums = [1], k = 1
Output: [1]
```
 
Constraints:

- `1 <= nums.length <= 105`
- `-104 <= nums[i] <= 104`
- `k is in the range [1, the number of unique elements in the array].
    It is guaranteed that the answer is unique.`
<br>
'''
k = int(input("Input the k value: "))
num = list(map(int,input("\nInput your list: ").strip().split()))

#num = [1,1,1,2,2,3]
#k=2
freqs = {}
for i in range(len(num)):
	try:
		freqs[num[i]] += 1
	except:
		freqs[num[i]] = 1

sorted_freqs = sorted(freqs.items(), key=lambda x:x[1], reverse=True)

ans = []
for index,i in enumerate(sorted_freqs):
	if index < k:
		#print(i)
		ans.append(i[0])

print(ans)





