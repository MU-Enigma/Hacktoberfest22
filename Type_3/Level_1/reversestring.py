import string
def reverseList(A, start, end):
	if start >= end:
		return
	A[start], A[end] = A[end], A[start]
	reverseList(A, start+1, end-1)
A = []
n = int(input("Enter number of elements : "))
for i in range(0, n):
    ele = (input())
    if ele in string.printable:
        A.append(ele)
    else:
        break
reverseList(A, 0, n)
print("Reversed list is")
print(A)