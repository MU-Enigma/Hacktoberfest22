count=[]
li=input("nums = ").split()
li=[int(i) for i in li]
length=len(li)
count=[None]*length
#count=[0,0,...]
for i in range(0,length):
    count[i]=0

for i in range(0,length):
    for j in range(i+1,length):
        if(li[i]>li[j]):
            count[i]+=1
print(count)