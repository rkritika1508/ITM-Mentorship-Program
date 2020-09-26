#include <iostream>
using namespace std;

int subArraySum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0, i;

    for (i = 1; i <= n; i++) {
        // If curr_sum exceeds the sum,
        // then remove the starting elements
        while (curr_sum > sum && start < i - 1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        // If curr_sum becomes equal to sum,
        // then return true
        if (curr_sum == sum) {
            cout <<start+1<<" "<< i<<endl;
            return 1;
        }

        // Add this element to curr_sum
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }

    // If we reach here, then no subarray
    cout<<-1<<endl;
}

int main() {
	//code
	int t, n, req_sum;
	cin>>t;
	for(int i=0; i<t; i++) {
	    cin>>n>>req_sum;
	    int arr[n];
	    for(int j=0; j<n; j++)
	        cin>>arr[j];
	    subArraySum(arr, n, req_sum);
	}
	return 0;
}
