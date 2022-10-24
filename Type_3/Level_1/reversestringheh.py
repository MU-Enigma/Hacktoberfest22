def reverse(str):   
    str = str[::-1]   
    return str   
    
array = str(input())
arr = []
shit = ['"', "[", "]", ",", " "]
for i in range(len(array)):
	if array[i] not in shit:
		arr.append(array[i])
print ("The original string  is: ",arr)   
print ("The reversed string is: ",reverse(arr))
