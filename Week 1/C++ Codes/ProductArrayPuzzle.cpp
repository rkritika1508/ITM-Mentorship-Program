#include <iostream>
using namespace std;

void product_array(int n, int arr[]) {
    long long int product = 1;
    int product_array[n];
    for (int i=0; i<n; i++) {
        product = product * arr[i];
    }
    for (int i=0; i<n; i++) {
        product_array[i] = product / arr[i];
        cout<<product_array[i]<<" ";
    }
    cout<<"\n";
}

int main() {
	//code
	int t, n;
	cin>>t;
	while (t--) {
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    product_array(n, arr);
	}
	return 0;
}
