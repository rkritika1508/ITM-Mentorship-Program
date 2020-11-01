#include<bits/stdc++.h>
using namespace std;

int maximumSumSubarray(int K, vector<int> &Arr , int N){
    int temp_sum = 0;
    for (int i=0; i<K; i++) 
        temp_sum += Arr[i];
    int result = temp_sum;
    for (int i=K; i<N; i++) {
        temp_sum += Arr[i] - Arr[i-K];
        result = max(result, temp_sum);         
    }
    return result;
}