#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    const char * s_chars = s.c_str();
    vector<int> occur(26);
    
    for(int i = 0; i < s.length(); i++ ){
        occur[s_chars[i] - 'a']++;
    }
    
    int max_occur =-1;
    bool removed_char = false;
    for(int i =0; i < 26; i++){
        if(occur[i] == 0){
            continue;
        }else if(max_occur == -1){
            max_occur = occur[i];
            continue;
        }else if(occur[i] == max_occur){
            continue;
        }else if(!removed_char && (occur[i] == max_occur + 1 || occur[i] == 1)){
            removed_char = !removed_char;
            continue;  
        }else{
            return "NO";
        }
    }
    
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
