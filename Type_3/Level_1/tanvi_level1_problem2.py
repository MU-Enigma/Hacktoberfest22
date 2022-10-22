def sumSquares(n):
  sum = 0
  for i in str(n):
    sum+= int(i)**2
  return sum

n = int(input("Enter your number:"))
previous = []
flag = 0

while n!=1:
  previous.append(n)
  n = sumSquares(n)
  if n in previous:
    print("false")
    flag = 1
    break
  
if flag == 0:
  print("true")

