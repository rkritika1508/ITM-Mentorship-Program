#include <bits/stdc++.h>
using namespace std;

class pairSum {
public:
    int first; // index of first element in pair
    int second; // index of second element in pair
    int sum; // sum of the pair
};
 
bool comp(const pairSum& a, const pairSum& b) {
  return a.sum < b.sum;
}

bool commonElements(pairSum a, pairSum b) {
    if (a.first != b.first && a.first != b.second && a.second != b.first && a.second != b.second)
        return false;
    return true;
}


int fourElements(vector<int> &arr, int n, int X) {
    int size = (n * (n - 1)) / 2, k = 0;
    pairSum pairs[size]; 
    
    // generate all combinations of pairs of two elements
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            pairSum temp;
            temp.sum = arr[i] + arr[j];
            temp.first = i;
            temp.second = j;
            pairs[k] = temp;
            k++;
        }
    }
            
    sort(pairs, pairs+size, comp); //sorting the pairs array
    int left = 0, right = size-1;

    while(left < right) {
        int temp_sum = pairs[left].sum + pairs[right].sum;
        // if temp_sum equals X and there are no common elements in the pair, return 1
        if ((temp_sum == X) && commonElements(pairs[left], pairs[right]) == false) 
            return 1;
        else if (temp_sum > X) // decrease the right pointer and point to smaller number
            right -= 1;
        else // increase the left pointer and point to bigger number
            left += 1;
    }
    return 0;
}

int main() {
	//code
	int t, n, X;
	cin>>t;
	for(int i=0; i<t; i++) {
	    vector<int> arr;
	    int temp;
	    for(int j=0; j<n; j++) {
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    cin>>X;
	    cout<<fourElements(arr, n, X);
	}
	return 0;
}