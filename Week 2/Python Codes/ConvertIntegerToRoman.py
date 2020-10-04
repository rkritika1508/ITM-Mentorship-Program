def convertRoman(n):
    #Code here
    numbers = [1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000]
    values = ["I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"]
    i = 12
    result = ""
    while n>0:
        quotient = n // numbers[i]
        n = n % numbers[i]
        result += values[i]*quotient
        i = i-1
    return result

if __name__ == '__main__':
    n = int(input())
    print(convertRoman(n))