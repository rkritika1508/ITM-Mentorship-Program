def union(list1,list2):
    le=len(list1)
    list1[le:le]=list2
    list4=[]
    list3=list(dict.fromkeys(list1))
    for i in range(len(list3)):
    	list4.append(int(list3[i]))
    list4.sort()
    for i in range(len(list4)):
    	print(list4[i],end=" ")
    
        
M,N=input().split()
M=int(M)
N=int(N)
l1= list(map(int, input().strip().split()))[:M]
l2=list(map(int, input().strip().split()))[:N]
union(l1,l2)