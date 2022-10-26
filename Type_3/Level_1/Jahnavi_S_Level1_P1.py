def generate(row):
    a = []
    for i in range(row):
        a.append([])
        for j in range(i + 1):
            if j == 0 or j == i:
                a[i].append(1)
            else:
                a[i].append(a[i - 1][j - 1] + a[i - 1][j])
    return a 
    
if __name__ == "__main__":
    row = int(input("Number of rows = "))
    print(generate(row))