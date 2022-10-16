#usr/bin/python3.10
#MU-Enigma/Hacktoberfest22 Type_3 Level_1 Problem 1: Pascal's triangle
def calcpascaltriang(n):
    r = [[1]]
    i = 1
    while(i < n):
        r.append([1]*(i+1))
        j = 1
        while(j < i):
            r[i][j] = r[i-1][j] + r[i-1][j-1]
            j += 1
        i += 1
    print(r)

n = int(input("Enter number of rows in the pascal triangle: "))
calcpascaltriang(n)


#input format, requires a positive number to be inputed to denote number of rows in the pascal's triangle
