#include<bits/stdc++.h>
using namespace std;

string get_hash(string word) {
    int word_hash[256] = {0};
    int counter = 1;
    string hash = "";
    for(int i=0; i<word.length(); i++) {
        if (word_hash[int(word[i])] == 0) {
            word_hash[int(word[i])] = counter;
            counter += 1;
        }
    }

    for(int i=0; i<word.length(); i++) {
        hash += to_string(word_hash[int(word[i])]);
    }
    return hash;
}
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    vector<string> result = {};
    string pattern_hash = get_hash(pattern);
    for (int i=0; i<dict.size(); i++) {
        string word_hash = get_hash(dict[i]);
        if (word_hash == pattern_hash) 
            result.push_back(dict[i]);
    }
    sort(result.begin(), result.end());
    return result;       
}

int main() {
    vector<string> dict = {"abb","abc","xyz","xyy"};
    string pattern = "foo";
    findMatchedWords(dict, pattern);
    return 0;
}