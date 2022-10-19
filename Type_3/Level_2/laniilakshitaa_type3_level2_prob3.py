li=input().split()
li=[int(item) for item in li]
print(li)
freq={}
dict=[]

for ele in li:
    if ele in freq:
        freq[str(ele)]+=1
    elif ele not in freq:
        freq[str(ele)]=1


k=int(input("k = "))

for i in range(0,k):
    dict_keys=list(freq.keys())
    dict_values=list(freq.values())
    element=dict_keys[dict_values.index(max(dict_values))]
    dict.append(element)
    freq.pop(str(element))
    
print(dict)

