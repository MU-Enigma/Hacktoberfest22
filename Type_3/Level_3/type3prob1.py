list1 = [1,3,5]
list2 = [2,4,6,10,11,15]
index1=0
index2=0
list1size = len(list1)
list2size = len(list2)

pseudo = []

while index1 < list1size and index2 < list2size:
     if list1[index1] < list2[index2]:
        pseudo.append(list1[index1])
        index1 += 1
     else:
      pseudo.append(list2[index2])
      index2 += 1

pseudo = pseudo + list2[index2:]
print(pseudo)




