
def generate(numRows):
    rowArray = []
    for i in range(numRows):
        rowArray.append([])
        for j in range(i + 1):
            if j == 0 or j == i:
                #Every Column's First and Last Element are filled with 1
                rowArray[i].append(1)
            else:
                rowArray[i].append(rowArray[i - 1][j - 1] + rowArray[i - 1][j])
    return rowArray 

if __name__ == "__main__":
    numRows = int(input("Enter the number of rows\n-->"))
    print(generate(numRows))