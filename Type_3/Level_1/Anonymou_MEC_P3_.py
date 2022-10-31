def findSingle(nums, n):
    res = nums[0]
    for i in range(1,n):
        res = res ^ nums[i]
    return res

if __name__ == "__main__":
    nums=input().split()
    nums=[int(item) for item in nums]
    print(findSingle(nums, len(nums)))