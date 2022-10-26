def singlenum(nums):
    nums.sort()
    
    if len(nums)==1:
        print(nums[0])
    elif nums[0] != nums[1]:
        print(nums[0])
    elif nums[n-2] != nums[n-1]:
        print(nums[n-1])


    for i in range(2, n-2):
        if nums[i]!=nums[i+1] and nums[i-1]!=nums[i]:
            print(num[i])
        else:
            i+i+1

n=int(input("Enter size of list: "))
nums=[]
for j in range(0, n):
    x= int(input())
    nums.append(x)

singlenum(nums)




 