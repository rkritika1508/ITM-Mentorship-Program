#include <iostream>
using namespace std;

void sort_array(int arr[], int n) {
    int count_0 = 0, count_1 = 0, count_2 = 0, i;
    for (i = 0; i < n; i++) {
        if (arr[i] == 0)
            count_0 += 1;
        if (arr[i] == 1)
            count_1 += 1;
        if (arr[i] == 2)
            count_2 += 1;
    }
    int result[n];
    i = 0;
    while (count_0 > 0) {
        result[i] = 0;
        count_0 -= 1;
        i += 1;
    }
    while (count_1 > 0) {
        result[i] = 1;
        count_1 -= 1;
        i += 1;
    }
    while (count_2 > 0) {
        result[i] = 2;
        count_2 -= 1;
        i += 1;
    }
    for (int i = 0; i < n; i++) {
        cout<<result[i]<<" ";
    }
    cout<<"\n";
}

int main() {
	//code
	int t, n;
	cin>>t;
	for(int i = 0; i < t; i++) {
        cin>>n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin>>arr[j];
        }
        sort_array(arr, n);
	}
	return 0;
}
