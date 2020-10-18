def reshape(mat,a,b):
    '''for i in range(a):
        j=i
        for j in range(b):
            print(mat[j])'''
    flat=[]
    for ele in mat:
        flat.extend(ele)
     
    for i in range(a*b):
        if i%b==0and i!=0:
            print("")
        print(flat[i],end=" ")
        
        
        
m,n=input().split()
a,b= input().split()
mat=[]
m=int(m)
n=int(n)
a=int(a)
b=int(b)
for i in range(m):
    
    list1=list(int(num) for num in input().strip().split())[:n]
    for i in range(len(list1)):
        list1[i]=int(list1[i])
    mat.append(list1)
if int(m*n==a*b):
    reshape(mat,a,b)
else:
    for i in range(m):
        for j in range(n):
            print(mat[i][j],end=" ")
        print("")