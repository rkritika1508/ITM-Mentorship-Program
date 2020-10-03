#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string S) {
    set <char> charset;
    string result = "";
    for(int i=0; i<S.length(); i++) {
        if (charset.find(S[i]) == charset.end()) {
            result += S[i];
            charset.insert(S[i]);
        }
    }
    return result;
}

int main() {
    string S = "geeksforgeeks";
    cout<<removeDuplicates(S);
    return 0;
}