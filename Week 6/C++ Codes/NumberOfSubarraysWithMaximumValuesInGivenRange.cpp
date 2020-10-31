#include <iostream>
using namespace std;

int subarrayTotal(int n) {
    return (n*(n+1))/2;    
}

    
int subarrayCount(int n, int L, int R, int arr[]) {
    int result = 0;
   
    // exc - count of elements smaller than L in current valid subarray. 
    // inc - count of elements smaller than or equal to R. 
    int exc = 0, inc = 0;
   
    for (int i=0; i<n; i++){
        // If the element > R, add current value to result and reset values of exc and inc. 
        if (arr[i] > R) {
            result = result + (subarrayTotal(inc) - subarrayTotal(exc));
            inc = 0;
            exc = 0;
        } 

        // if it is less than L, then it is included in the sub-arrays 
        else if (arr[i] < L) {
            inc++;
            exc++;
        }  
            
        // if >= L and <= R, then count of subarrays formed by previous chunk 
        // of elements formed by only smaller elements is reduced from result. 
        else {
            result -= subarrayTotal(exc);
            exc = 0;
            inc++;            
        }  
    } 
   
    result = result + (subarrayTotal(inc) - subarrayTotal(exc));
    return result;
}
    
int main() {
	//code
	int t, n, L, R;
	cin>>t;
	for (int i=0; i<t; i++) {
	    cin>>n>>L>>R;
	    int arr[n];
	    for(int j=0; j<n; j++)
	        cin>>arr[j];
    cout<<subarrayCount(n, L, R, arr)<<endl;
	}
	return 0;
}