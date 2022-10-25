def singleno(arr):
    res = 0
    for i in arr:
        res ^= i
    return res

n=int(input("No of elements in the array: "))
arr_1=list(map(int, input("Elements of array: ").strip().split()))

print(singleno(arr_1))
