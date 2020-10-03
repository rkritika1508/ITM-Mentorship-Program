#include<bits/stdc++.h>
using namespace std;

// O(nlogn) complexity
bool anagram_sorting(string a, string b) {
    // sort the two strings
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // if length of two strings is different, they are not anagrams.
    if (a.length() != b.length())
        return false;
    
    // comparing the two strings
    for (int i=0; i < a.length(); i++) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}


// O(n) complexity; Count characters using 2 arrays
bool anagram_counter(string a, string b) {
    // initializing the counters of two strings
    int a_counter[256] = {0};
    int b_counter[256] = {0};

    // getting the counter of each character in two strings
    for(int i=0; i<a.length(); i++)
        a_counter[a[i]]++;
    for(int i=0; i<b.length(); i++)
        b_counter[b[i]]++;
    
    // if length of two strings is different, they are not anagrams.
    if (a.length() != b.length())
        return false;
    
    // comparing the two counters
    for(int i=0; i<256; i++) {
        if (a_counter[i] != b_counter[i])
            return false;
    }
        
    return true;
}

// O(n) complexity; Count characters using 1 array
bool anagram_counter_opt(string a, string b) {
    // initializing a counter array
    int counter[256] = {0};

    // getting the counter of each character in two strings
    for(int i=0; i<a.length(); i++)
        counter[a[i]]++;
    for(int i=0; i<b.length(); i++)
        counter[b[i]]--;

    // if all elements in the array are 0, return true. If any element is greater than 0, return False.
    for(int i=0; i<256; i++) {
        if (counter[i] != 0)
            return false;
    }

    return true;
}


int main() {  
    int t;
    cin>>t;
    while(t--) {
        string a, b;
        cin>>a>>b;
        if (anagram_sorting(a, b) == true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        /*
        if (anagram_counter(a, b) == true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        if (anagram_counter_opt(a, b) == true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        */
    }
    return 0;
}