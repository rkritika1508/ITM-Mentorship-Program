#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    const char * s_chars = s.c_str();
    vector<int> occur(26);
    //get counter for each character
    for(int i = 0; i < s.length(); i++ ){
        occur[s_chars[i] - 'a']++;
    }
    
    int max_occur =-1;  // initialize maximum occuring variable as -1
    bool removed_char = false;    //initialize removed character as false
    for(int i =0; i < 26; i++){       
        if(occur[i] == 0)    //if character is not present in the string then continue to next line of code
            continue;
        else if(max_occur == -1){     // if max_occur is -1 then assign present charcter in max_occur
            max_occur = occur[i];
            continue;
        } else if(occur[i] == max_occur)
            continue;
        else if (!removed_char && (occur[i] == max_occur + 1 || occur[i] == 1)) {  // id occur[i]  == 1 the string is valid then continue and return 'yes' otherwise return 'no'
            removed_char = !removed_char;
            continue;  
        } else
            return "NO";
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
