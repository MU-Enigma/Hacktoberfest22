li=input().split()
li=[str(item) for item in li]
print(li)
freq={}
final=[]

for ele in li:
    if ele in freq:
        freq[(ele)]+=1
    elif ele not in freq:
        freq[(ele)]=1

print(freq)

k=int(input("k = "))

for i in range(0,k):
    dict_keys=list(freq.keys())
    dict_values=list(freq.values())
    element=dict_keys[dict_values.index(max(dict_values))]
    freq.pop(str(element))
    final.append(element)
    
    
print(final)


