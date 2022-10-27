n=int(input("Enter the numRows="))
arr=[]
for i in range(1,n+1):
	if i==1:
		arr+=[[1]]
		continue
	a=[1]
	for j in range(len(arr[i-2])-1):
		a+=[arr[i-2][j]+arr[i-2][j+1]]
	a+=[1]
	arr+=[a]
print(arr	)
