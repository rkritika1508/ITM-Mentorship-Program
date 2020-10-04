#code
def check(word1, word2):
    if len(word2) < len(word1):
        return -1
    counter = 0
    for i in range(len(word2)):
        if counter < len(word1) and word2[i] == word1[counter]:
            counter += 1
    if counter == len(word1):
        return counter
    return -1
        
    
def largest_word(array, word):
    result = ''
    for i in range(len(array)):
        checker = check(array[i], word)
        if checker > -1 and checker > len(result):
            result = array[i]
    return result
            
    
    
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        array = [x for x in input().split()]
        word = input()
        print(largest_word(array, word))