'''
Example 1:

Input: s = ["h","e","l","l","o"," ","w","o","r","l","d"]
Output: ["d","l","r","o","w"," ","o","l","l","e","h"]
```

```
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
'''

def reverse(str):   
    str = str[::-1]   
    return str  
    
array = str(input())
arr = []
shit = ['"', "[", "]", ",", " "]
for i in range(len(array)):
	if array[i] not in shit:
		arr.append(array[i])
#print ("The original string  is: ",arr)   
print (reverse(arr))