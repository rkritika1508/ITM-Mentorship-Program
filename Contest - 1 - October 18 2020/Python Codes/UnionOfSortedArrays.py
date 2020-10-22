# Using Sorting
def union(A, B):
    A = A + B # concatenating the matrix
    result = list(set(A)) # getting the unique values 
    result.sort()
    for i in range(len(result)):
        print(result[i],end=" ")

# Using Merging - More efficient
def mergeArrays(a,b,n,m):
    i, j = 0, 0
    t, d = [], set()
    for num in a:
        if num not in d:
            d.add(num)
            t.append(num)  
    a = t
    t, d = [], set()  
    for num in b:
        if num not in d:
            d.add(num)
            t.append(num) 
    b = t
    n, m = len(a), len(b)
    temp = []
    while i<n and j<m:
        if a[i] < b[j]:
            temp.append(a[i])
            i += 1
        elif a[i] > b[j]:
            temp.append(b[j])
            j += 1
        else: 
            temp.append(a[i])
            i += 1
            j += 1
    while i < n: 
        temp.append(a[i])
        i += 1
    while j < m: 
        temp.append(b[j])
        j += 1
    return temp

if __name__ == '__main__':
    M, N = input().split()
    M, N = int(M), int(N)
    A = [int(x) for x in input().split()]
    B = [int(x) for x in input().split()]
    union(A, B)