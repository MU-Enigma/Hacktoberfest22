A=list(map(int,input().split())) 
B=A
C=[]
if len(A)==1:
    C.append(0)
    print(C)
else:
    
    sum=0
    for i in range(len(A)):
        for a in range(i+1,len(A)):
            if A[i]>A[a]:
                sum+=1
        C.append(sum)
        sum=0
    print(C)