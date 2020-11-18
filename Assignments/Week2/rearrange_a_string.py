def rearrange(string):
    sum_of_digits=0
    counter=0
    for i in string:
        if i.isdigit():
            sum_of_digits+=int(i) #increase the sum by adding digits present in the string
            counter+=1 #counting the no of digits
    
    sorted_string=sorted(string)
    for i in range(counter):
        sorted_string.pop(0)  #removing the digits
    return(sorted_string,sum_of_digits)
    
for _ in range(int(input())):
    string=input()
    str,digit=rearrange(string)
    for i in str:
        print(i,end="")
    print(digit)
