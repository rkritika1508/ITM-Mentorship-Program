def union(A,B):
    length=len(A)
    A[length:length]=B
    Result=[]
    Temp=list(dict.fromkeys(A))
    for i in range(len(Temp)):
    	Result.append(int(Temp[i]))
    Result.sort()
    for i in range(len(Result)):
    	print(Result[i],end=" ")
    
        
M,N=input().split()
M,N=int(M),int(N)
A= list(map(int, input().strip().split()))[:M]
B=list(map(int, input().strip().split()))[:N]
union(A,B)
