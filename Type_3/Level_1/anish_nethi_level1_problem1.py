numRows = int(input("Enter the number of rows you want: "))

ans = [None] * numRows

for i in range(numRows):
    row, mid = [1] * (i+1), (i >> 1) + 1
    
    for j in range(1,mid):
        value = ans[i-1][j-1] + ans[i-1][j]
        row[j], row[len(row) - j - 1] = value, value

    ans[i] = row

return ans
