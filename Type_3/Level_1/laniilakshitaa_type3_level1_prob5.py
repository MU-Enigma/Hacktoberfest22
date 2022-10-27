str=input("s=")
s=""
length=len(str)-1
while length>=0:
    s=s+str[length]
    length-=1
s=list(s)
print(s)

#input: s=string

