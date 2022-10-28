a=[]
num=int(input())
n=[1]
a.append(n)
for i in range(1,num):
    n=[]
    n.append(1)
    for j in range(1,i):
        s=0
        s=a[i-1][j-1]+a[i-1][j]
        n.append(s)
    n.append(1)
    a.append(n)
print(a)
