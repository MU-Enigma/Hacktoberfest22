N = int(input("Enter the size of array :- "))
K = int(input("Enter the no. of most frequent elements to be printed :- "))
Count_Arr = []
Input_Arr = []
res = []
for i in range(0,N):
  x = int(input())
  Input_Arr.append(x)
def build_freq(arr):
  frequency = {}
  for item in arr:
     if item in frequency:
        frequency[item] += 1
     else:
        frequency[item] = 1
  return(frequency)
freq_dict = build_freq(Input_Arr)
sorted_dict = sorted(freq_dict.items(), key=lambda x:x[1], reverse=True)
sorted_dict = dict(sorted_dict)
Count_Arr = list(sorted_dict.keys())
print(f'Most frequent occured {K} elements are :- ' )
for i in range(0,K):
  x = Count_Arr[i]
  res.append(x)
print(res)