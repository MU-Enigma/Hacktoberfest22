store={}
l = [int(l) for l in input("nums = ").split()] #for taking input

for i in l:
    if i in store.keys():
        store[i]=store[i]+1
    else:
        store[i]=1
        
print(list(store.keys())[list(store.values()).index(1)])

#input format: numbers separated by space key

