def isHappy(n, prev=[]):
    nums = sum([int(x)**2 for x in list(str(n))])
    if nums in prev:
        return False
    return isHappy(nums, prev+[nums]) if nums != 1 else True
    
if __name__ == "__main__":
    n = int(input("Enter the number: "))
    prev = []
    print(isHappy(n, prev))
