class Solution(object):
   def three_sum(self, n):
      n.sort()
      result = []
      for i in range(len(n)-2):
         if i> 0 and n[i] == n[i-1]:
            continue
         l = i+1
         r = len(n)-1
         while(l<r):
            sum = n[i] + n[l] + n[r]
            if sum<0:
               l+=1
            elif sum >0:
               r-=1
            else:
               result.append([n[i],n[l],n[r]])
               while l<len(n)-1 and n[l] == n[l + 1] : l += 1
               while r>0 and n[r] == n[r - 1]: r -= 1
               l+=1
               r-=1
      return result
ob1 = Solution()
nums=int(input("Number of elements in the array: "))
arr_1=list(map(int, input("Enter array elements with a space: ").strip().split()))
print(ob1.three_sum(arr_1))
