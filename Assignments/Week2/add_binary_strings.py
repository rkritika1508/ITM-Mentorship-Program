def addBinary(a, b):
        s=bin(int(a,2)+int(b,2))
        return (s[2:])

a=input()
b=input()
x=addBinary(a,b)
print(x)
