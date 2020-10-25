def amazing(s):
    vowels=["a",'e','i','o','u','A','E','O','U',"I"]
    count=0
    for i in range(len(s)):
        if s[i] in vowels:
           count+=len(s)-i
    return(count%10003)

if __name__=="__main__":
    string=input()
    x=amazing(string)
    print(x)
