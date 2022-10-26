def findSingle(nums, n):
    res = nums[0]
    for i in range(1,n):
        res = res ^ nums[i]
    return res

if __name__ == "__main__":
    n = input("Enter the elements of your array = ")
    nums=n.split()
    nums=[int(item) for item in nums]
    ans = findSingle(nums, len(nums))
    print("Single number in the array = ",ans)