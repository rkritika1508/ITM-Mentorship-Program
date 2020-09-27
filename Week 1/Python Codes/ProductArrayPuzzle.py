def product_array(n, arr):
    product = 1
    product_array = [1]*n
    for num in arr:
        product = product * num
    for i in range(n):
        product_array[i] = product // arr[i]
    for num in product_array:
        print(num, end = " ")
    print()

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        product_array(n, arr)  