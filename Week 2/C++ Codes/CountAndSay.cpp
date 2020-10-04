#include <bits/stdc++.h> 
using namespace std; 

string countnndSay(int n) 
{ 
	// Base cases 
	if (n == 1)	 return "1"; 
	if (n == 2)	 return "11"; 

	// Find n'th term by generating all terms from 3 to 
	// n-1. Every term is generated using previous term 
	string prev = "11"; // Initialize previous term 
	for (int i = 3; i<=n; i++) 
	{ 
		// In below for loop, previous character 
		// is processed in current iteration. That 
		// is why a dummy character is added to make 
		// sure that loop runs one extra iteration. 
		prev += '$'; 
		int len = prev.length(); 

		int counter = 1; // Initialize count of matching chars 
		string temp_str = ""; // Initialize i'th term in series 

		// Process previous term to find the next term 
		for (int j = 1; j < len; j++) 
		{ 
			// If current character does't match 
			if (prev[j] != prev[j-1]) 
			{ 
				// Append count of str[j-1] to temp 
				temp_str += counter + '0'; 

				// Append str[j-1] 
				temp_str += prev[j-1]; 

				// Reset count 
				counter = 1; 
			} 

			// If matches, then increment count of matching characters 
			else counter++; 
		} 

		// Update prev 
		prev = temp_str; 
	} 

	return prev; 
} 

int main() 
{ 
	int N;
	cin>>N; 
	cout << countnndSay(N) << endl; 
	return 0; 
} 
