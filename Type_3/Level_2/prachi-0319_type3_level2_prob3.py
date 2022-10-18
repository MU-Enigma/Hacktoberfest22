num=int(input("Number of elememts = "))
print("nums = ")

l=[] #input list
temp=[]  
store={} #dictionary to store frequencies

for i in range(0,num): #getting inputs
    l.append(input())
k=int(input("k = "))
for i in l:
    if i in store.keys():
        store[i]=store[i]+1
    else:
        store[i]=1
        
for j in range(0,k):
    keys=list(store.keys())
    vals=list(store.values())
    ele=keys[vals.index(max(vals))] #element with highest value
    store.pop(str(ele)) #delete element with highest value
    temp.append(ele) #for printing
print(temp)

#input format: numbers separated by enter key
