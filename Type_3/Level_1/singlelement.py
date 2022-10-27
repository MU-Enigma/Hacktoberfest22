list=[]
n=int(input("How many elements are in the list?"))

print("Make sure to type only one number per prompt!")

for i in range(0,n):
    num=int(input("Enter one number:"))
    list.append(num)

all=list

def single(all,a):
    one = all[0]
    for x in range(1,a):
        one = one^all[x]
    return one

print("",single(all,len(all)))
