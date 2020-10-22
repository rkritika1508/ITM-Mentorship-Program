#include<bits/stdc++.h>
using namespace std;

class bst{
	
	public:
	string c;
	bst*left=NULL;
	bst*right=NULL;
};

// BST Method - Added By Harsh Jain
bst* addtobst(bst* root,bst* node) {
    if(root == NULL) {
        root = node;
        cout<<node->c;
        return root;
    }
    if(node->c == " ")
        cout<<" ";
    else {
        if(node->c>root->c) {
            if(root->right != NULL)
                root->right = addtobst(root->right,node);
            else {
                root->right = node;
                cout<<node->c;    
            }
        }
        if(node->c<root->c) {
            if(root->left != NULL)
                root->left = addtobst(root->left,node);
            else {
                root->left = node;
                cout<<node->c;
            }
        }
    }
	return(root);
}

string removeDuplicates(string S) {
    set <char> charset;
    string result = "";
    for(int i=0; i<S.length(); i++) {
        if (charset.find(S[i]) == charset.end()) {
            result += S[i];
            charset.insert(S[i]);
        }
    }
    return result;
}

int main() {
    string S = "geeksforgeeks";
    cout<<removeDuplicates(S);
    return 0;


    // In case of BST, this should be the main function.
    /*
    int i = 0;
	bst*root = new bst();
	root = NULL;
	while(i < S.size())
	{
		bst*node = new bst();
		node->c = S[i];
		root = addtobst(root,node);
		i++;		
	}
    */
}