def checkPangram(str): 
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet: 
        if char not in str.lower(): 
            return False
        
    return True

s=input()
if checkPangram(s):
    print(1)
else:
    print(0)
