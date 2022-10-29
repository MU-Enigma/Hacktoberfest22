triple=[]

def threesum(list, L):
    triplet = False
    for x in range(0, L-2):
        for y in range(x+1, L-1):
            for z in range(y+1, L):
                if (list[x] + list[y] + list[z] == 0):
                    res=[list[x], list[y], list[z]]
                    triple.append(res)
                    triplet = True
    if (triplet == False):
        print(" ")

list=[]
L=int(input("How many elements are in the list?"))
print("Make sure to type only one number per prompt!")

for i in range(0,L):
    num=int(input("Enter one number:"))
    list.append(num)

L = len(list)
threesum(list, L)

result=[]

for x in triple:
    x.sort()

for x in triple:
    if x not in result:
        result.append(x)

print(result)
