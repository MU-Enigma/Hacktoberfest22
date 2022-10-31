def MostFreqNum(list, L, K):
 
    fn = {}
    for a in range(L):
        if list[a] in fn:
            fn[list[a]] += 1
        else:
            fn[list[a]] = 1
    x = [0] * (len(fn))
    j = 0
    
    for a in fn:
        x[j] = [a, fn[a]]
        j += 1
    x = sorted(x, key=lambda y: y[0],
               reverse=True)
    x = sorted(x, key=lambda y: y[1],
               reverse=True)
    
    print("[", end="")
    for a in range(K):
        if a in range(K-1):
            print(x[a][0], end=",")
        else:
            print(x[a][0], end="")   
    print("]")

if __name__ == "__main__":
    list=[]
    L=int(input("How many elements are in the list?"))
    print("Make sure to type only one number per prompt!")

    for i in range(0,L):
        num=int(input("Enter one number:"))
        list.append(num)
    L = len(list)
    K = int(input("How many elements do you want?"))
    MostFreqNum(list, L, K)