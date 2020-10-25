def non_repeating_character(s):
    for i in range(len(s)):
        if s[i] not in(s[:i]+s[(i+1):]):
            return(s[i])
    return(-1)
        
for _ in range(int(input())):
    t=int(input())
    s=input()
    x=non_repeating_character(s)
    print(x)
    


    
