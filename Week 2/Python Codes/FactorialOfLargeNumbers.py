def multiply(m, n):
    length = len(n) - 1
    result = '0'
    for i in range(length, -1, -1):
        temp = str(int(m) * int(n[i])) + '0'*(length - i)
        result = str(int(result) + int(temp)) 
    return result

def large_factorial(num):
    answer = '1'
    for i in range(2, num+1):
        answer = multiply(answer, str(i))
    return answer
    
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        print(large_factorial(n))