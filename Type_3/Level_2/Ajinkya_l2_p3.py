# printing highest frequency elements
new_list=[]  
freq={} 

ver = [str(ver) for ver in input("nums = ").split()]

for i in ver:
    if i in freq.keys():
        freq[i] += 1
    else:
        freq[i]=1
        
k=int(input("k = "))        
        
for j in range(0,k):
    keys=list(freq.keys())
    vals=list(freq.values())
    high=keys[vals.index(max(vals))] 
    freq.pop(str(high))
    new_list.append(high)
print(new_list)
