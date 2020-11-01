#include<bits/stdc++.h>
using namespace std;

string minWindow(string str, string pat) {
    int len1 = str.length(); 
    int len2 = pat.length(); 

    // check if string's length is less than pattern's length
    if (len1 < len2) 
        return ""; 

    int hash_pat[256] = {0}; 
    int hash_str[256] = {0}; 

    // store occurrence ofs characters of pattern 
    for (int i = 0; i < len2; i++) 
        hash_pat[pat[i]]++; 

    int start = 0, start_index = -1, min_len = INT_MAX; 

    int count = 0; // count of characters 
    for (int j = 0; j < len1 ; j++) { 
        // count occurrence of characters of string 
        hash_str[str[j]]++; 

        // If string's char matches with pattern's char then increment count 
        if (hash_pat[str[j]] != 0 && 
            hash_str[str[j]] <= hash_pat[str[j]] ) 
            count++; 

        // if all the characters are matched 
        if (count == len2) { 
            // if any character is occurring more no. of times 
            // than its occurrence in pattern, remove it from starting
            // if pattenrn doesn't contain any character, remove it 
            while (hash_str[str[start]]>hash_pat[str[start]] || hash_pat[str[start]]==0) { 
                if (hash_str[str[start]] > hash_pat[str[start]]) 
                    hash_str[str[start]]--; 
                start++; 
            } 

            // update window size 
            int len_window = j - start + 1; 
            if (min_len > len_window) { 
                min_len = len_window; 
                start_index = start; 
            } 
        } 
    }
    
    // If no window found 
    if (start_index == -1)  
        return "";  
    return str.substr(start_index, min_len); 
}