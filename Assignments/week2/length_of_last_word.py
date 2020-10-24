def lengthOfLastWord(A):
        try:
            A=A.split()
            return(len(A[-1]))
        except IndexError as i:
            return (0)
if __name__=="__main__":
    A=input()
    x=lengthOfLastWord(A)
    print(x)
