#arr=["h","e","l","l","o"]
arr=input()
def reverse(arr):
	for i in range(len(arr)//2):
		arr[i],arr[len(arr)-1-i]=arr[len(arr)-1-i],arr[i]
reverse(arr)
print(arr)
