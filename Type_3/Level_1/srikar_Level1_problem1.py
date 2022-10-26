n=int(input("Please enter the number of rows: "))
val=[]
temp=[1]
val.append(temp)

#calculating pascals triangle using for loops 
for p in range(1,n):
    temp=[]
    temp.append(1)
    for j in range(1,p):
        sum=0
        sum=val[p-1][j-1]+val[p-1][j]
        temp.append(sum)
    temp.append(1)
    val.append(temp)

#printing the pascal triangle in the required format 
print(val) 

