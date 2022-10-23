def sqrt(n):
  if(n<1):
    return 0
  if(n==1):
    return 1
  i = 1
  answer = 0
  while 1==1:
    if i*i > n:
      answer = i-1
      break
    i += 1
  return answer

n = int(input("Enter the number: "))
print(sqrt(n))
