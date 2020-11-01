#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n, int k) { 
  
    // unordered_map hash implemented as hash table 
    unordered_map<int, int> hash; 
    int sum = 0, maxLen = 0; 
  
    for (int i=0; i<n; i++) { 
        sum += arr[i]; 
  
        // when subarray starts from index '0' 
        if (sum == k) 
            maxLen = i + 1; 
  
        // make an entry for 'sum' if it is not present in hash 
        if (hash.find(sum) == hash.end()) 
            hash[sum] = i; 
  
        // check if 'sum-k' is present in hash or not 
        if (hash.find(sum - k) != hash.end()) { 
            // update maxLength 
            if (maxLen < (i - hash[sum - k])) 
                maxLen = i - hash[sum - k]; 
        } 
    } 
    return maxLen; 
} 
  

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n, k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    cout<<longestSubarray(arr, n, k)<<endl;
	}
	return 0;
}