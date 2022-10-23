N = int(input("Enter the length of the array :-　"))
Arr = []
Count= []
for i in range(0,N):
  x = int(input())
  Arr.append(x)
def build_freq(arr):
  frequency = {}
  for item in arr:
     if item in frequency:
        frequency[item] += 1
     else:
        frequency[item] = 1
  return(frequency)
freq_dict = build_freq(Arr)
sorted_dict = sorted(freq_dict.items(), key=lambda x:x[1])
sorted_dict = dict(sorted_dict)
Count = list(sorted_dict.keys())
print("The element that occured once in the array is :- ")
print(Count[0])