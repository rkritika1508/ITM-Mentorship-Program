# O(nlogn) complexity
def anagram_sorting(a, b):
    # sort the two strings
    a = sorted(a)
    b = sorted(b)

    # if length of two strings is different, they are not anagrams.
    if len(a) != len(b):
        return False
    
    # comparing the two strings
    for i in range(len(a)):
        if a[i] != b[i]:
            return False
    return True


# O(n) complexity; Count characters using 2 arrays
def anagram_counter(a, b):
    # initializing the counters of two strings
    a_counter = [0]*256
    b_counter = [0]*256

    # getting the counter of each character in two strings
    for char in a:
        a_counter[ord(char)] += 1
    for char in b:
        b_counter[ord(char)] += 1
    
    # if length of two strings is different, they are not anagrams.
    if len(a) != len(b):
        return False
    
    # comparing the two counters
    for i in range(256):
        if a_counter[i] != b_counter[i]:
            return False
    return True


# O(n) complexity; Count characters using 1 array
def anagram_counter_opt(a, b):
    # initializing a counter array
    counter = [0]*256

    # getting the counter of each character in two strings
    for char in a:
        counter[ord(char)] += 1
    for char in b:
        counter[ord(char)] -= 1

    # if all elements in the array are 0, return true. If any element is greater than 0, return False.
    for i in range(256):
        if counter[i] != 0:
            return False
    return True

if __name__ == '__main__':
    n = int(input())
    for i in range(n):
        a, b = input().split()
        if anagram_counter_opt(a, b) is True:
            print("YES")
        else:
            print("NO")