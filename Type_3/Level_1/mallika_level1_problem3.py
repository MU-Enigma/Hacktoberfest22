def singlenum(n, arr):
    countnum = {}
    for i in range(0,n):
        if arr[i] in countnum:
            countnum[arr[i]] = countnum[arr[i]]+1
        else:
            countnum[arr[i]] = 1
    for i,j in countnum.items():
        if j==1:
            print("Single number: %d " %i)


if __name__=="__main__":
    n=int(input())  #number of elements in array
    arr=[]
    for i in range(0, n):
        x=int(input())
        arr.append(x)
    singlenum(n,arr)