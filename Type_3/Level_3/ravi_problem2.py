num = list(map(int,input("\nInput your list: ").strip().split()))
big_dic = {}
#num = [5,2,6,1]
ans = []
global flag

for i in range(len(num)):
	flag = False
	for j in range(i,len(num)):
		if num[j] < num[i]:
			try:
				big_dic[i]+=1
			except:
				big_dic[i]=1
			flag = True
	#print(big_dic)
	if flag:
		ans.append(big_dic[i])
		flag = False
	else:
		ans.append(0)
print(ans)