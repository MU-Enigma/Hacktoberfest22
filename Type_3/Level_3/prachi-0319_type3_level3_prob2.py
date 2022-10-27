store=[] #list to store frequencies
l = [str(l) for l in input("nums = ").split()] #for taking input

for i in range(0,len(l)):
    count=0
    for j in range(i,len(l)):
        if l[i]>l[j]:
            count=count+1
    store.append(count)

print(store)

#input format: numbers separated by space
