def singlenum(arr):
    res = 0
    for i in arr:
        res ^= i
    return res

nums=int(input("Number of elements in the array: "))
arr_1=list(map(int, input("Elements of array: ").strip().split()))

print(singlenum(arr_1))
