string = input ("Enter string input: ")
if(len(string)>105 or len(string)<1) :
    print("re-run code, string length invalid")
    string = 'NULL' 
string =[*string]
print(string [::-1])
