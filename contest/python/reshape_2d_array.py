def array(r,s,an,ar):
    ans=[]
    try:
        k=0
        for i in range(r):
            ans.append([])
            for j in range(c):
                ans[i].append(an[k])
                k+=1
        return(ans)
    except IndexError as e:
        return(ar)

if __name__ == '__main__':
    m,n=map(int,input().split())
    r,c=map(int,input().split())
    ar=[]
    an=[]
    for i in range(m):
        ar.append([])
        ar[i]=list(map(int,input().split()[:n]))
        for j in ar[i]:
            an.append(j)
    res=array(r,c,an,ar)
    for i in res:
        print(i)
       

    

