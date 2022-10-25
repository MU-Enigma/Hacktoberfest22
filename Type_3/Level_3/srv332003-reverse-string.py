arr=["h","e","l","l","o"]

def reverse():
	for i in range(len(arr)//2):
		arr[i],arr[len(arr)-1-i]=arr[len(arr)-1-i],arr[i]
reverse()
print(arr)
