def remove_duplicates(S):
    my_set = set()
    final = ''
    for char in S:
        if char not in my_set:
            my_set.add(char)
            final += char
    return final

if __name__ == '__main__':
    n = int(input())
    for i in range(n):
        string = input()
        print(remove_duplicates(string))