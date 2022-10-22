myArray = []

#for input:["h", "e", "l", "l", "o"] enter : h e l l o
myArray = [item for item in input("Enter the list items : ").split()]

n = len(myArray)#number of elements

myOrder = [-1-x for x in range(0, n)] 
newArray = [myArray[i] for i in myOrder]

print(newArray)