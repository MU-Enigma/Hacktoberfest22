st=input("enter a string ")
st=list(st)
for i in range(((len(st))//2)):
   temp=st[-1-i]
   st[-1-i]=st[i]
   st[i]=temp
print(list(st))