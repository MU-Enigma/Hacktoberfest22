def mostfreq (num):
    return max(set(num), key = num.count)

def remove_ele (val,num):

    a=list(map(str,num))  
    b=" ".join(a)
    b=b.replace(str(val),"") #replacing the current most repeated element with ""
    b=b.split() #spliting to remove the blank elements
    x=list(map(int,b)) 

    return x


n = int(input("Enter size of array between 1 and 105:"))  #taking input for number of elements in array 
if (n>105 or n<1):
    print("Invalid Input, re-run code")
    n=0
num = [0]*n  
print("Array inputs should lie between -104 to 104 only") 

for i in range(0,n):

    num[i] = int( input("Enter value :" )) #array inputs
    if(num[i]>104 or num[i]<-104):
        print("Invalid Input, re-run code")
        num = [0] *n
        break 

print(num)

k = int (input("Enter the number of frequent elements:")) 

for i in range(0,k):
    value= (mostfreq(num)) # calling mostfreq that returns the most repeated element 
    print("The "+ str(i+1)+ " most repeated element:")
    print(value)
    num= remove_ele(value, num) # removing the most repeated element so that the second most repeated element can be identified 



