nums = []

#Taking input from user.
nums = list(map(int,input("nums : ").strip().split()))[:315]

#Checking if it is a single number.
for x in nums:
    if (nums.count(x)<2):
        print("Output:", end = " ")
        print(x)
        break
      
