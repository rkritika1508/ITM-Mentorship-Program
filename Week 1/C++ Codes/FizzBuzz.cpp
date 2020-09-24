#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void fizzBuzz1(int n)
{
    for(int i = 1; i<=n; i++)
    {
        int flag = 0;
        if (i%3 == 0)
        {
            flag = 1;
            cout<<"Fizz";
        }
        if (i%5 == 0)
        {
            flag = 1;
            cout<<"Buzz";
        }
        if (flag == 0)
            cout<<i;
        cout<<"\n";
    }
}

void fizzBuzz2(int n)
{
    for(int i = 1; i<=n; i++)
    {
        int flag = 0;
        if (i%15 == 0)
            cout<<"FizzBuzz";
        else if (i%3 == 0)
            cout<<"Fizz";
        else if (i%5 == 0)
            cout<<"Buzz";
        else
            cout<<i;
        cout<<"\n";
    }
}

int main()
{
    fizzBuzz1(120);
    fizzBuzz2(120);
    return 0;
}
