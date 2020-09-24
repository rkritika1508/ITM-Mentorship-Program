def given_sum(n, arr, req_sum):
    temp_sum = 0
    start = 0
    for i in range(n):
        temp_sum += arr[i]
        
        while temp_sum > req_sum:
            temp_sum -= arr[start]
            start += 1
        
        if temp_sum == req_sum:
            return([start+1, i+1])
    return -1
            
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        temp = [int(x) for x in input().split()]
        n = temp[0]
        req_sum = temp[1]
        arr = [int(x) for x in input().split()]
        answer = given_sum(n, arr, req_sum)
        if answer != -1:
            print(answer[0], answer[1])
        else:
            print(-1)