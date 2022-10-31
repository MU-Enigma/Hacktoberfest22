def pascal(num):
    arr=[]
    n=[1]
    arr.append(n)
    for i in range(1,num):
        n=[]
        n.append(1)
        for j in range(1,i):
            s=0
            s=arr[i-1][j-1]+arr[i-1][j]
            n.append(s)
        n.append(1)
        arr.append(n)
    print(arr)

if __name__ == "__main__":
    n = int(input("Enter the number of rows: "))
    pascal(n)