from collections import Counter
def find(n, k):
    a=Counter(n)
    freq = [key for key, val in a.most_common(k)]

    return freq

def main():
    N=[]
    no_of_elements=int(input("Enter the no. of elements: "))
    if no_of_elements==0:
        print("Yo!, enter some values")
        return 0

    for i in range (0,no_of_elements):
        temp=int(input())
        N.append(temp)
    
    k=int(input("Enter the value for k: "))
    print(find(N,k))  # [4,3]  

if __name__ == '__main__':
    main()