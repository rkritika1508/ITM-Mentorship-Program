#code
def sort_array(arr):
    count_0 = 0
    count_1 = 0
    count_2 = 0
    for num in arr:
        if num == 0:
            count_0 += 1
        if num == 1:
            count_1 += 1
        if num == 2:
            count_2 += 1
    return [0]*count_0 + [1]*count_1 + [2]*count_2

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        result = sort_array(arr)
        for num in result:
            print(num, end = " ")
        print()