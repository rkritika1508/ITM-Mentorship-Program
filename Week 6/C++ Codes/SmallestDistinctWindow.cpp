#include <bits/stdc++.h>
using namespace std;

int smallestDistinctWindow(string str) {
    int n = str.length(); 
      
    // Count all distinct characters. 

    int visited[256] = {0};
    int string_count = 0;
    for(int i=0; i<str.length(); i++){
        if (visited[str[i]] == 0) {
            visited[str[i]] = 1;            
            string_count++;
        }
    }
    
    int substr_hash[256] = {0};
    int substr_count = 0, start = 0, min_len = n; 
    // Maintain a window of characters that contains all characters of given string. 
    for (int j=0; j<n; j++) {
        substr_hash[str[j]]++;
          
        // If any distinct character matched, then increment count 
        if (substr_hash[str[j]] == 1) 
            substr_count += 1;
              
        // Try to minimize the window i.e., check if 
        // any character is occurring more no. of times 
        // than its occurrence in pattern, if yes 
        // then remove it from starting and also remove 
        // the useless characters. 
        if (substr_count == string_count) {
            while (substr_hash[str[start]] > 1) {
                if (substr_hash[str[start]] > 1)
                    substr_hash[str[start]] -= 1;
                start += 1;
            } 

            // Update window size 
            int len_window = j - start + 1;
            if (min_len > len_window) 
                min_len = len_window;
        }
    } 
    // Return substring starting from start_index and length min_len """ 
    return min_len;    
} 


int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++) {
        string str;
        cin>>str;
        cout<<smallestDistinctWindow(str)<<endl;
	}
	return 0;
}