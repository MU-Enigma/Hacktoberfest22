import collections

def most_freq(arr,k):
    # arr_sorted=sorted(arr)
    freq_of_elements = collections.Counter(arr)
    freq_of_elements= dict(sorted(freq_of_elements.items(), key=lambda item: item[1],reverse=True))
    output=[]
    count=0;
    for i in freq_of_elements:
        if(count<k):
            output.append(i)
        count+=1
    return output

n=int(input("Enter number of elements= "))
nums=[]
print("Enter elements line by line:")
for i in range(n):
    temp=int(input())
    nums.append(temp)
k=int(input("enter value of k= "))
print(most_freq(nums,k))