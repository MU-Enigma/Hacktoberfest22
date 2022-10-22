import math

s=input()
s=list(s)
n=len(s)-1
num=math.ceil(n/2)
i=0
while(n>=num):
    s[i],s[n]=s[n],s[i]
    i=i+1
    n=n-1
print(s) 
#print("".join(s)) to print as a string
#input format: string
