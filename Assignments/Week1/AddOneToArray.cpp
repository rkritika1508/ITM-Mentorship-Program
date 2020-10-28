#include<bits/stdc++.h>
#include<vector>
vector<int> Solution::plusOne(vector<int> &A) 
{
    int size=A.size(),carry=0,sum=A[size-1]+1;
    if(sum==10)
   { carry=1;
    sum=0;}
    vector<int>res;
    res.insert(res.begin(),sum);
    for(int i =size-2;i>=0;i--)
    {
        sum=A[i]+carry;
        if(sum==10)
        {
            sum=0;
            carry=1;
        }
        else
        carry=0;
        res.insert(res.begin(),sum);
        
    }
    if(carry==1)
    res.insert(res.begin(),carry);
    int i =0;
    while(res[i]==0)
        res.erase(res.begin());
    
  
    
    return res;
}
