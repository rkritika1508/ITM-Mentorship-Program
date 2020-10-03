def roman_to_integer(string):
    my_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    roman = 0
    for i in range(len(string)):
        if i != len(string) - 1 and my_dict[string[i]] < my_dict[string[i+1]]:
            roman -= my_dict[string[i]]
        else:
            roman += my_dict[string[i]]
    return roman
    
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        roman = input()
        integer = roman_to_integer(roman)   
        print(integer)