#include <bits/stdc++.h>
using namespace std;

int makingAnagrams(string s1, string s2) {
    int a1[26] = {0}, a2[26] = {0};  
    int len1 = s1.size();
    int len2 = s2.size();
    // getting the counter of each character in two strings
    for(int i = 0; i < len1; i++)   
        a1[s1[i]-'a']++;
    for(int i = 0; i < len2; i++)  
        a2[s2[i]-'a']++;
    int ans = 0;
    for(int i = 0; i < 26; i++)     // condition 3 , this will make anagrams of string
        ans += abs(a1[i]-a2[i]);
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
