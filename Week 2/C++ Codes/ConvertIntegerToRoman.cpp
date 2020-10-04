#include<bits/stdc++.h>
using namespace std;

string convertToRoman(int n) 
{
    int numbers[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string values[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    string result = "";
    int i = 12; // last index of numbers array
    while (n > 0) {
        int quotient = n / numbers[i];
        n = n % numbers[i];
        while (quotient--) 
            result += values[i];
        i--;
    }
    return result;
}

int main() {
    int n;
    cin>>n;
    cout<<convertToRoman(n);
    return 0;
}