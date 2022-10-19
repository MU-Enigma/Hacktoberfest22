list=[]
size=int(input())


for i in range(0,size):
    elements=int(input())
    list.append(elements)
    
    count=1
    first=list[0]
    
for ele in list:
    freq=list.count(ele)
    if(freq==count):
        first=ele

print(first)
    
