#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minDiff(int arr[], int length, int students) {
    sort(arr, arr+length);
    int min_diff = arr[students-1] - arr[0];
    for(int i = students-1; i < length; i++) {
        int diff = arr[i] - arr[i-students+1];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}


int main() {
	int t, i, length, j, students;
	cin>>t;
	for(int i=0; i<t; i++) {
	    cin>>length;
	    int arr[length];
	    for (j = 0; j<length; j++) {
	        cin>>arr[j];
	    }
	    cin>>students;
	    cout<<minDiff(arr, length, students)<<endl;
	}
	return 0;
}

