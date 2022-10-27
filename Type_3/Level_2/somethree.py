class Solution(object):
   def somethree(left, nword):
      nword.sort()
      result = []
      for i in range(len(nword)-2):
         if i> 0 and nword[i] == nword[i-1]:
            continue
         l = i+1
         r = len(nword)-1
         while(l<r):
            sum = nword[i] + nword[l] + nword[r]
            if sum<0:
               l+=1
            elif sum >0:
               r-=1
            else:
               result.append([nword[i],nword[l],nword[r]])
               while l<len(nword)-1 and nword[l] == nword[l + 1] : l += 1
               while r>0 and nword[r] == nword[r - 1]: r -= 1
               l+=1
               r-=1
      return result
ob1 = Solution()
nums=int(input("No of elements: "))
arr_1=list(map(int, input("Enter elements: ").strip().split()))
print(ob1.somethree(arr_1))
