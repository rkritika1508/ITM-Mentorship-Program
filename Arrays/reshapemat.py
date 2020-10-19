def reshape(mat,a,b):
    
    flat=[]
    for ele in mat:
        flat.extend(ele)
     
    for i in range(a*b):
        if i%b==0 and i!=0:
            print("")
        print(flat[i],end=" ")
        
        
        
m,n=input().split()
a,b= input().split()
mat=[]
m,n,a,b=int(m),int(n),int(a),int(b)
for i in range(m):
    
    Rows=list(int(num) for num in input().strip().split())[:n]
    for i in range(len(Rows)):
        Rows[i]=int(Rows[i])
    mat.append(list1)

if int(m*n==a*b):
    reshape(mat,a,b)
else:
    for i in range(m):
        for j in range(n):
            print(mat[i][j],end=" ")
        print("")
