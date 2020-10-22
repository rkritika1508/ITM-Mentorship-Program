#include<iostream>
using namespace std;
int main()
{
	int arr[256];
		 for(int i = 0; i <256;i ++)
	 {
	 	arr[i]=0;
	 }
	 	string str;
	string str1;
	 cout<<"enter string1"<<endl;
	 cin>>str;
	 cout<<"enter string2"<<endl;
	 cin>>str1;

	if(str.size()==str1.size())
	{int i =0;
	
		while (i<str.size())
		{int k = int(str[i]);
		
	
		arr[k]=1;
		
		i++;
		}
		 i =0;
	
		while (i<str.size())
		{
		int l =int(str1[i]);
		
		arr[l]=2;
		i++;
		}
		
		int m= 0;
	 for(int i = 0; i <256;i ++)
	 {
	 	if(arr[i]==1)
	     {cout<<"they are not anagrams"<<endl;
	     m=1;
	     break;
	    
	     }
	 }
		if(m==0)
		{
			cout<<"yes they are anagrams"<<endl;
		}
		
	}
	cout<<"they are not anagrams"<<endl;
  
}