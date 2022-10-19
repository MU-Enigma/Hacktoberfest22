
elements=input().split()
elements=[int(item) for item in elements]
print(elements)
count=1
first=elements[0]
    
for ele in elements:
    freq=elements.count(ele)
    if(freq==count):
        first=ele

print(first)