def get_hash(word):
    word_hash = {}
    string = ""
    counter = 1
    for char in word:
        if char not in word_hash:
            word_hash[char] = counter
            counter += 1
    for char in word:
        string += str(word_hash[char])
    return string

def findSpecificPattern(Dict, pattern):
    result = []
    pattern_hash = get_hash(pattern)
    for word in Dict:
        word_hash = get_hash(word)
        if pattern_hash == word_hash:
            result.append(word)
    result.sort()
    return result

if __name__ == '__main__':
    n = int(input())
    Dict = [word for word in input().split()]
    pattern = input()
    result = findSpecificPattern(Dict, pattern)
    for word in result:
        print(word, end = " ")