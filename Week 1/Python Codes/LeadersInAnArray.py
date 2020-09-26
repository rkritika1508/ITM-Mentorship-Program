def leader(arr):
    leaders = []
    leader_so_far = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= leader_so_far:
            leader_so_far = arr[i]
            leaders.append(leader_so_far)
    leaders = leaders[::-1]
    leaders = [str(x) for x in leaders]
    string = " ".join(leaders)
    return string

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        print(leader(arr))
        