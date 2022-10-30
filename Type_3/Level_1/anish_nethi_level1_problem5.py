n = int(input("Enter the number of elements in array: "))
arr = list(map(str, input("\nEnter the numbers: ").strip().split()))[:n]

arr = arr[::-1]
print("The reverse is: ", end = "")
print(arr)
