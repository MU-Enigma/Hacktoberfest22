def happynum(num):
    sum=0
    for i in str(num):
        sum=sum+int(i)**2
    return sum

if __name__ == "__main__":
    num=int(input())
    flag=0
    list=[]
    while num!=1:
        list.append(num)
        num = happynum(num)
        if num in list:
            print("false")
            flag=1
            break
    if flag==0:
        print("true")