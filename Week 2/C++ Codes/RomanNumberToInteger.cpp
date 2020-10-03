#include<bits/stdc++.h>
using namespace std;

int value(char r){
    switch (r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}

int romanToInteger(string S) {
    int roman = 0;
    for(int i=0; i<S.length(); i++) {
        if (i != S.length() - 1 and value(S[i]) < value(S[i+1]))
            roman -= value(S[i]);
        else
            roman += value(S[i]);        
    }
    return roman;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        string S;
        cin>>S;
        cout<<romanToInteger(S)<<endl;
    }
    return 0;
}