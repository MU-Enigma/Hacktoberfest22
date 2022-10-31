trow = [1]
list1=[]
y = [0]
i=0
n=int(input())
for x in range(max(n,0)):
  list1.append(trow)
  trow=[l+r for l,r in zip(trow+y, y+trow)]

print(list1)