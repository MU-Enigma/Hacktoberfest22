p=[]
numrows=int(input("enter no of rows "))
l=[1]
p.append(l)
for i in range(1,numrows):
    t=[]
    t.append(1)
    for j in range(1,i):
        t.append(p[i-1][j-1]+p[i-1][j])
    t.append(1)
    p.append(t)
print(p)