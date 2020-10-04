#include <bits/stdc++.h>
using namespace std;

int check(string word1, string word2) {
    
    if (word1.length() > word2.length())
        return -1;
    int counter = 0;
    for (int i=0; i<word2.length(); i++) {
        if (counter < word1.length() && word2[i] == word1[counter])
            counter += 1;
    }
    if (counter == word1.length())
        return counter;
    return -1;
}

string largestWord(vector<string> dict, string word)
{
   //Your code here
    string result = "";
    for(int i=0; i<dict.size(); i++) {
        int checker = check(dict[i], word);
        if (checker > -1 && checker > result.length()) 
            result = dict[i];
    }
    return result;
}

int main() {
    //code
	int t, n;
	cin>>t;
	while(t--) {
	    cin>>n;
	    vector<string> dict;
	    string word;
	    for (int i=0; i<n; i++) {
	        cin>>word;
	        dict.push_back(word);
	    }
	    cin>>word;
	    string result = largestWord(dict, word);
	    cout<<result<<endl;
	}
	return 0;
}