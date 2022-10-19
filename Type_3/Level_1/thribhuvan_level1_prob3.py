n=int(input("enter number of elements: "))
l=[]
# input
for i in range(0,n):
    num=int(input())
    l.append(num)


no_duplicate_sum=0
for i in set(l):
    no_duplicate_sum+=i
sum=0
for i in l:
    sum+=i

print(2*no_duplicate_sum-sum)