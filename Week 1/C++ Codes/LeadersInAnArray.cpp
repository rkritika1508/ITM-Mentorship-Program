#include <iostream>
using namespace std;

void leaders(int arr[], int n) {
    int i, max_so_far = arr[n-1], counter = 0;
    int result[n];
    for(i = n-1; i>=0; i--) {
        if (arr[i] >= max_so_far) {
            max_so_far = arr[i];
            result[counter] = max_so_far;
            counter += 1;
        }
    }
    for(i=counter-1; i>=0; i--)
        cout<<result[i]<<" ";
    cout<<"\n";
}

int main() {
	int t, i, n;
	cin>>t;
	for(i=0; i<t; i++) {
	    cin>>n;
	    int arr[n];
	    for(int j=0; j<n; j++) {
	        cin>>arr[j];
	    }
	    leaders(arr, n);
	}
	return 0;
}
