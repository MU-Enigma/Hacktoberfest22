l=[]
numRows=int(input("numRows = "))
k=[1]
l.append(k)
for p in range(1,numRows):
    k=[]
    k.append(1)
    for j in range(1,p):
        sum=0
        sum=l[p-1][j-1]+l[p-1][j]
        k.append(sum)
    k.append(1)
    l.append(k)
print(l)
