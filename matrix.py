def main():
    m, n = get_dimensionsA()
    A = [[0 for _ in range(n)] for _ in range(m)]
    p, q = get_dimensionsB()
    B = [[0 for _ in range(q)] for _ in range(p)]
    C = [[0 for _ in range(q)] for _ in range(m)]
    
    for i in range (m):
        for j in range(q):
            A[i][j] = int(input("Enter A values"))

    for i in range(p):
        for j in range(q):
            B[i][j] = int(input("Enter B values"))
            
    if p!=n:
        raise ValueError("Enter valid dimensions for multiplication ")
    
    for i in range(m): # getting row from A
        for j in range(q):# getting column from B
            C[i][j]=0
            for k in range(p):
                C[i][j] = A[i][k] * B[k][j] + C[i][j]


    print("The elements of resultant matrix ")
    for i in range (m):
        for j in range(q):
            
            print( C[i][j])



def get_dimensionsA():
    m = int(input("Enter number of rows of matrix A "))
    n = int(input("Enter number of columns of matrix A "))
    return (m, n)

def get_dimensionsB():
    p = int(input("Enter number of rows of B "))
    q = int(input("Enter number of columns of B "))
    return (p, q)

main()
