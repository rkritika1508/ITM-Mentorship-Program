def makingAnagrams(a, b):
    s=0
    for i in a:
        if i in (b):
            s+=abs(a.count(i)-b.count(i))
            b=b.replace(i,'')
            a=a.replace(i,'')
        else:
            s+=a.count(i)
            a=a.replace(i,'')
    s+=len(b)
    return(s)

if __name__ == '__main__':
    s1 = input()
    s2 = input()

    result = makingAnagrams(s1, s2)
    print(result)
