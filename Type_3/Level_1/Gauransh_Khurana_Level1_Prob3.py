import numpy as np

l = list(map(int, input().split()))
n = len(l)

a = [0]*70000
for i in l:
    a[i+30000]+=1

x = len(a)
for i in range(x):
    if a[i]==1:
        print(i-30000)
        exit(1)
