x = int(input())
ans = []
curr = [[1]]
for i in range(1, x):
    new = []
    for j in range(i+1):
        if j>0 and j<i:
            new.append(curr[i-1][j-1] + curr[i-1][j])
        elif j==0:
            new.append(curr[i-1][j])
        else:
            new.append(curr[i-1][j-1])
    curr.append(new)
print(curr)