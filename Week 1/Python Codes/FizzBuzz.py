# Brute Force Implementation
def FizzBuzz1(n):
    for i in range(1, n+1):
        if i%15 == 0:
            print("FizzBuzz", end="")
        elif i%3 == 0:
            print("Fizz", end="")
        elif i%5 == 0:
            print("Buzz", end="")
        else:
            print(i, end="")
        print()

# Efficient Implementation
def FizzBuzz2(n):
    for i in range(1, n+1):
        flag = 0
        if i%3 == 0:
            print("Fizz", end="")
            flag = 1
        if i%5 == 0:
            print("Buzz", end="")
            flag = 1
        if flag == 0:
            print(i, end="")
        print()

if __name__ == "__main__":
#    n = int(input())
    n = 10
    FizzBuzz1(n)
    FizzBuzz2(n)
        