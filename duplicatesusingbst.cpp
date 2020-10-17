
//This code will remove duplicates from a given string using binary search tree


#include<iostream>
using namespace std;
class bst{
	
	public:
	string c;
	bst*left=NULL;
	bst*right=NULL;
};

bst* addtobst(bst*root,bst*node)
{if(root==NULL)
{root=node;
cout<<node->c;
return root;

}
if(node->c==" ")
cout<<" ";
else
{
if(node->c>root->c)
{if(root->right!=NULL)
root->right=addtobst(root->right,node);
else
{
root->right=node;
cout<<node->c;

}
}
if(node->c<root->c)
{if(root->left!=NULL)
root->left=addtobst(root->left,node);
else
{root->left=node;
cout<<node->c;
}

}
}
	return(root);
}


int main()
{
	string str = {"harsh is good for others"};
	int i = 0;
	bst*root=new bst();
	root=NULL;
	while(i<str.size())
	{
		bst*node=new bst();
		node->c=str[i];
		root=addtobst(root,node);
		i++;
		
	}
	
	return 0;
}
