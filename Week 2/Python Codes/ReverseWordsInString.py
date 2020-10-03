# simplest solution; not to be used
def reverse_temp(string):
    # split string at every space
    string = string.split(" ")
    # filter out extra spaces in the beginning and the end and store words in a list
    string = [x for x in string if len(x) > 0]
    # reverse the list
    string = string[::-1]
    # return the string after joining with a space
    return " ".join(string)

def string_reverse(string):

    def word_reverse(word):
        n = len(word)
        j = n-1
        word = list(word)
        for i in range(n//2):
            word[i], word[j] = word[j], word[i]
            j -= 1
        return ''.join(word)

    start = 0
    result = ""
    length = len(string)

    while start < length:
        # ignoring all the spaces in the beginning
        while start < length and string[start] == ' ':
            start += 1
        # if only spaces are present, break the loop
        if start >= length:
            break

        end = start + 1
        # getting every word
        while end < length and string[end] != " ":
            end += 1

        # getting the substring of the word and reversing the word
        word = word_reverse(string[start:end])

        if len(result) == 0:
            result = word
        else:
            result = result + " " + word

        # updating start to next character of the end index
        start = end + 1

    result = word_reverse(result)
    return result     

def string_reverse_pointer(string):
    length = len(string)
    start = 0
    result = ""

    while start < length:
        # ignoring all the spaces in the beginning
        while start < length and string[start] == ' ':
            start += 1
        # if only spaces are present, break the loop
        if start >= length:
            break
        
        end = start + 1
        # getting every word
        while end < length and string[end] != " ":
            end += 1

        # getting the substring of the word
        word = string[start:end]

        if len(result) == 0:
            result = word
        else:
            result = word + " " + result
        
        # updating start to next character of the end index
        start = end + 1
    return result

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        string = input()
        print(reverse_temp(string))
        print(string_reverse(string))
        print(string_reverse_pointer(string))