def uni(a,b):
    arr=[]
    for i in a:
        if i not in arr:
            arr.append(i)
    for i in b:
        if i not in arr:
            arr.append(i)
    
    return (sorted(arr))
if __name__=='__main__':
    m,n=map(int,input().split())
    
    a=list(map(int,input().split()[:m]))
    b=list(map(int,input().split()[:n]))
    res=uni(a,b)
    print(res)



    
