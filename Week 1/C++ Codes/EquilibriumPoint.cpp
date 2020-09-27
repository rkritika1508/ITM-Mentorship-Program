#include <iostream>
using namespace std;

int equilibrium_point(int n, int arr[]) {
    int total_sum = 0, sum_so_far = 0;
    if (n == 1)
        return 1;
    for(int i=0; i<n; i++)
        total_sum += arr[i];
    for(int i=0; i<n; i++) {
        sum_so_far += arr[i];
        if (sum_so_far == total_sum - sum_so_far - arr[i+1])
            return i + 2;
    }
    return -1;
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
	   cout<<equilibrium_point(n, arr)<<endl;
	}
	return 0;
}
