def reverseWords(Str): 
    start = 0
    for i in range(len(Str)):
        if (Str[i] == ' ' or i == len(Str)-1):
            end = i - 1
            if(i == len(Str)-1):
                end = i
            while (start < end):
                Str[start], Str[end]=Str[end],Str[start]
                start+=1
                end-=1
            start = i + 1
         
    return "".join(Str)


Str = input()
Str=[i for i in Str]
 
print(reverseWords(Str))