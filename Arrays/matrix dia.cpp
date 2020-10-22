#include<iostream>
using namespace std ;
int leftdiasum(int a[50][50],int n);
int rightdiasum(int a[50][50],int n);
int main()
{int n;
	int ar[50][50];
	cout<<"enter size of your square matrix"<<endl;
	cin>>n;
	for(int i = 0; i < n ; i ++)
	{cout<<"enter row no."<< i+1<<endl;
		
			for(int j= 0; j< n; j++)
			{
				cin>>ar[i][j];
			}
			cout<<endl;
	}
		for(int i = 0; i < n; i ++)
	{
		
			for(int j= 0; j< n ; j++)
			{
				cout<<ar[i][j]<<" ";
			}
			cout<<endl;
	}
	cout<<"left dia sum: "<<leftdiasum(ar,n)<<endl;
	cout<<"right dia sum: "<<rightdiasum(ar,n)<<endl;
	return 0;
}
int leftdiasum(int a[50][50],int n)
{int sum = 0;
		for(int i = 0; i < n; i ++)
	{
		sum = sum + a[i][i];
	}
	
	return sum;
	
}
int rightdiasum(int a[50][50],int n)
{int sum = 0;
		for(int i = 0,j = n-1; i < n,j>=0; i ++,j--)
	{
		sum = sum + a[i][j];
	}
	
	return sum;
	
}