#include<bits/stdc++.h>
using namespace std;

string string_reverse(string S) {
    int start = 0, length = S.length(), end;
    string result = "", word;

    while (start < length) {
        // ignoring all the spaces in the beginning
        while (start < length && S[start] == ' ')
            start += 1;
        // if only spaces are present, break the loop
        if (start >= length)
            break;

        end = start + 1;
        // getting every word
        while (end < length && S[end] != ' ')
            end += 1;

        // getting the substring of the word and reversing the word
        word = S.substr(start, end-start);
        reverse(word.begin(), word.end());

        if (result.length() == 0)
            result = word;
        else
            result = result + " " + word;

        // updating start to next character of the end index
        start = end + 1;
    }

    reverse(result.begin(), result.end());
    return result;
}
   

string string_reverse_pointer(string S) {
    int start = 0, length = S.length(), end;
    string result = "", word;

    while (start < length) {
        // ignoring all the spaces in the beginning
        while (start < length && S[start] == ' ')
            start++;
        // if only spaces are present, break the loop
        if (start >= length)
            break;
        
        end = start + 1;
        // getting every word
        while (end < length && S[end] != ' ')
            end++;

        // getting the substring of the word
        word = S.substr(start, end-start);

        if (result.length() == 0)
            result = word;
        else
            result = word + " " + result;
        
        // updating start to next character of the end index
        start = end + 1;
    }
        
    return result;
}

int main() {
    string S = "mno pqr stu vwx yz";
    cout<<string_reverse(S)<<endl;
    /*
    int t;
    cin>>t;
    while(t--) {
        string S;
        cin>>S;
        cout<<string_reverse(S)<<endl;
    }
    return 0;
    */
}