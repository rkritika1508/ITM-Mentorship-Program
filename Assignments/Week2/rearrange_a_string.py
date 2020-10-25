def rearrange(string):
    count2=0
    count1=0
    for i in string:
        if i.isdigit():
            count2+=int(i)
            count1+=1

    a1=sorted(string)
    for i in range(count1):
        a1.pop(0)
    return(a1,count2)
    
for _ in range(int(input())):
    a=input()
    x,y=rearrange(a)
    for i in x:
        print(i,end="")
    print(y)
