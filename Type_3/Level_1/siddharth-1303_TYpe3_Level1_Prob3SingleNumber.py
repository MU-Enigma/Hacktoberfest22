num = list(map(int, input("enter number ").split(",")))
frequency = {}
for item in num:
   if (item in frequency):
      frequency[item] += 1
   else:
      frequency[item] = 1
for key,value in frequency.items():
    if value==1:
        print(key)
    else:
        continue