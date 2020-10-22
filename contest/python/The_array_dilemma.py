def uni(a, b):
    arr = []
    for i in a:
        if i not in b:
            arr.append(i)
    return arr


if __name__ == '__main__':
    m, n = map(int, input().split())

    a = list(map(int, input().split()[:m]))
    b = list(map(int, input().split()[:n]))
    res = uni(a, b)

    print(res)
