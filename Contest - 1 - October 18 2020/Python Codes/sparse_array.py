

def matchingStrings(strings, queries):

    arr = []
    for i in queries:
        arr.append(strings.count(i))

    return arr


if __name__ == '__main__':

    string=list(map(str,input().split()))
    queries=list(map(str,input().split()))
   x=matchingStrings(string,queries)
   print(x)
