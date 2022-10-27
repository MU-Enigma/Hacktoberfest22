count=[]
list=input("Enter the numbers ").split()
list=[int(i) for i in list]
length=len(list)
count=[None]*length
for i in range(0,length):
    count[i]=0
for i in range(0,length):
    for j in range(i+1,length):
        if(list[i]>list[j]):
            count[i]+=1
print(count)
