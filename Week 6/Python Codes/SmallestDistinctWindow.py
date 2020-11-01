def smallestDistinctWindow(string): 
    n = len(string) 
      
    # Count all distinct characters. 
    string_count = len(set(string)) 
      
    substr_hash = {}
    substr_count = 0
    start = 0
    min_len = n 
      
    # Maintain a window of characters 
    # that contains all characters of given string. 
    for j in range(n): 
        if string[j] not in substr_hash:
            substr_hash[string[j]] = 1
        else:
            substr_hash[string[j]] += 1
          
        # If any distinct character matched, then increment count 
        if substr_hash[string[j]] == 1: 
            substr_count += 1
              
        # Try to minimize the window i.e., check if 
        # any character is occurring more no. of times 
        # than its occurrence in pattern, if yes 
        # then remove it from starting and also remove 
        # the useless characters. 
        if substr_count == string_count: 
            while substr_hash[string[start]] > 1: 
                if substr_hash[string[start]] > 1: 
                    substr_hash[string[start]] -= 1
                start += 1
                  
            # Update window size 
            len_window = j - start + 1
              
            if min_len > len_window: 
                min_len = len_window 
  
    # Return substring starting from start_index 
    # and length min_len """ 
    return min_len
                                   
# Driver code 
if __name__=='__main__': 
    t = int(input())
    for i in range(t):
        string = input()
        print(smallestDistinctWindow(string))