#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int length, int arr[]) {
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i=0; i<length; i++) {
        max_ending_here = max_ending_here + arr[i];

        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main() {
    int t, length;
    cin>>t;
    while (t--) {
        cin>>length;
        int arr[length];
        for(int i=0; i<length; i++)
            cin>>arr[i];
        cout<<maxSubarraySum(length, arr)<<endl;
    }
    return 0;
}
