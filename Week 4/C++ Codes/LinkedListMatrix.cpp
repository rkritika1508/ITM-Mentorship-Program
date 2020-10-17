#include<bits/stdc++.h>
using namespace std;
#define MAX 20

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};

// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    // stores the head of the linked list 
    struct Node* mainhead = NULL; 
  
    // stores the head of linked lists of each row 
    struct Node* head[n]; 
    struct Node *righttemp, *newptr; 
  
    // Firstly, we create m linked lists 
    // by setting all the right nodes of every row 
    for (int i = 0; i < n; i++) { 
  
        // initially set the head of ith row as NULL 
        head[i] = NULL; 
        for (int j = 0; j < n; j++) { 
            newptr = new Node(mat[i][j]); 
  
            // stores the mat[0][0] node as 
            // the mainhead of the linked list 
            if (!mainhead) 
                mainhead = newptr; 
  
            if (!head[i]) 
                head[i] = newptr; 
            else
                righttemp->right = newptr; 
  
            righttemp = newptr; 
        } 
    } 
  
    // Then, for every ith and (i+1)th list, 
    // we set the down pointers of 
    // every node of ith list 
    // with its corresponding 
    // node of (i+1)th list 
    for (int i = 0; i < n - 1; i++) { 
        struct Node *temp1 = head[i];
        struct Node *temp2 = head[i + 1]; 
  
        while (temp1 && temp2) { 
            temp1->down = temp2; 
            temp1 = temp1->right; 
            temp2 = temp2->right; 
        } 
    }
    // return the mainhead pointer of the linked list 
    return mainhead;    
}
