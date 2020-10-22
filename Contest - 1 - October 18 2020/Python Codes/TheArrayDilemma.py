def uni(a, b):
    arr = []
    for i in a:
        if i not in b:
            arr.append(i)
    return arr

if __name__ == '__main__':
    m, n = map(int, input().split())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    res = uni(a, b)
    print(res)
