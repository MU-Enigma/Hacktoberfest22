n = int(input("enter the number of elements in the array:"))
a = []
for i in range(0,n):
  a.append(int(input("enter element %d: " % (i+1))))

frequency = {}
for i in range(0,n):
  if a[i] in frequency:
    frequency[a[i]] += 1
  else:
    frequency[a[i]] = 1

for i,j in frequency.items():
  if j==1:
    print("%d is the single element" % i)
