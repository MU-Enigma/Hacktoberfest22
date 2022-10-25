n = int(input("How many rows do you want?"))
answer = []
answer.append([1])

for i in range(1,n):
  temp = []
  temp.append(1)
  for j in range(1,i):
    temp.append(answer[i-1][j-1] + answer[i-1][j])
  temp.append(1)
  answer.append(temp)

print(answer)
