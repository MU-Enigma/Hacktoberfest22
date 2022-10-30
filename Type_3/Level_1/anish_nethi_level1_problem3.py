n = int(input("Enter the number of elements in array: "))
arr = list(map(int, input("\nEnter the numbers: ").strip().split()))[:n]

ans = 2 * sum(set(arr)) - sum(arr)

print("\nThe element that appears only once is " + str(ans))
