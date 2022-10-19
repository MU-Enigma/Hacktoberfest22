temp=[]  
store={} #dictionary to store frequencies

l = [str(l) for l in input("nums = ").split()] #for taking input

for i in l:
    if i in store.keys():
        store[i]=store[i]+1
    else:
        store[i]=1
        
k=int(input("k = "))        
        
for j in range(0,k):
    keys=list(store.keys())
    vals=list(store.values())
    ele=keys[vals.index(max(vals))] #element with highest value
    store.pop(str(ele)) #delete element with highest value
    temp.append(ele) #for printing
print(temp)

#input format: numbers separated by space
