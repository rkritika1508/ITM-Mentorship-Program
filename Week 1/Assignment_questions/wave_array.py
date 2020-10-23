def wave_array(arr):
    
    arr.sort()
    if len(arr)%2==0:
        for i in range(0,len(arr),2):
            arr[i],arr[i+1]=arr[i+1],arr[i]
    else:
        for i in range(0,len(arr)-1,2):
            arr[i],arr[i+1]=arr[i+1],arr[i]
    return (arr)
if __name__=="__main__":
    arr=list(map(int,input().split()))
    ans=wave_array(arr)
    print(ans)
