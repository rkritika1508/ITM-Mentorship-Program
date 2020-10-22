#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

class node{
public:
		int data;
	node*left;
	node*right;
	
};
node* root = NULL;

node* add(node*parent , node* n )
{




	if(parent==NULL)

{
	
	parent = n;

	return parent;
	
	 
	  
}
	else
	{
	
		
		if(n->data>parent->data)
		{parent->right =add(parent->right,n);
		return(parent);
			}
		
		if(n->data<parent->data)
		{
	parent ->left=add(parent->left,n);
			return(parent);
			}
			
			
		}
		
	
			
	 

		
	}
	
	
	void preorder(node*parent)
{if(parent==NULL)
return;
else
{
	cout<<parent->data<<endl;
	preorder(parent->left);
	preorder(parent->right);
	
}
	
	
	
	
}

void inorder(node*parent)
{
	if(parent ==NULL)
	return;
	else
	{inorder(parent->left);
		cout<<parent->data<<endl;
	inorder(parent->right);

		
		
	}
	
	
	
}
void postorder(node*parent)
{
	if(parent ==NULL)
	return;
	else
	{postorder(parent->left);
	postorder(parent->right);
	cout<<parent->data<<endl;
		
		
	}
	
	
	
}


node *search(node*parent, int item)
{node* x;
x->data = 0;
	if(parent==NULL)
	{cout<<"your item is not found"<<endl;
	return x;
		
	}
	else
	{
		
		if(parent->data ==item)
		{cout<<"item found"<<endl;
		x ->data=1;
		return x;
		}
		else
		{
			if(item >parent->data)
			{x = search(parent->right,item);
			if(x->data==1)
			{	x= parent;
			return x;
			}
			else
			return x;
			}
				if(item <parent->data)
			{search(parent->left,item);
					if(x->data==1)
			{	x= parent;
			return x;
			}
			else
			return x;
			
			}
			
		}
		
		
	}
}
/*void delete(node*parent , int data)
{
	
	
	
	
}*/
	void levelorder(node*parent)
	{
		if(parent == NULL)
		{return;
	   }
	   queue<node*> q;
	   q.push(parent);
	   while(!q.empty())
	   {node*curr = q.front();
	   q.pop();
cout<<curr->data<<" ";


	  if(curr->left !=NULL) q.push(curr ->left);
	  	  if(curr->right !=NULL) q.push(curr ->right);
	  	  
	   }
	  
		
	}
	
	vector<int> spiral(node*parent)
	{
		
		queue<node*> q;
		vector<int> list;
		vector<int> temp;
		int counter = 1;
	 list.push_back(parent->data);
	  	  if(parent->left !=NULL) q.push(parent->left);
	  	  if(parent->right !=NULL) q.push(parent->right);
	  	 
	 
	   while(!q.empty())
	   {int size = q.size();
	   temp.clear();
	   for(int i = 0 ; i <size;i++)
	 {
	   	node*curr = q.front();
	   	  temp.push_back(curr->data);
	  
	  if(curr->left !=NULL) q.push(curr ->left);
	  	  if(curr->right !=NULL) q.push(curr ->right);
	  	  
	  	  q.pop();
	 }
	 counter ++;
	 if(counter%2!=0)
	 reverse(temp.begin(),temp.end());

	 list.insert(list.end(),temp.begin(),temp.end());

	  	  
	   }
	   return list;
	  
		
		
	}
	
	void leftview(node*parent)
	{
		if(parent == NULL)
		{return;
	   }
	   queue<node*> q;
	   q.push(parent);
	  cout<<parent->data<<" ";
	  q.pop();
	  	  if(parent->left !=NULL) q.push(parent->left);
	  	  if(parent->right !=NULL) q.push(parent->right);
	 
	   while(!q.empty())
	   {int size = q.size();
	   for(int i = 0 ; i <size;i++)
	 {
	   	node*curr = q.front();
	   	  if(i==0)
	   cout<<curr->data<<" ";



	  if(curr->left !=NULL) q.push(curr ->left);
	  	  if(curr->right !=NULL) q.push(curr ->right);
	  	  
	  	  q.pop();
	 }
	  	  
	   }
	  
		
	}
	
	

int main()
{vector<int>list;
	while(true)
	{int i ;
	cout<<"1. add"<<endl<<"2. preorder show"<<endl<<"3. inorder"<<endl<<"4. postorder"<<endl<<"5. search"<<endl<<"6.lvlorder"<<endl<<"7. left view"<<endl;;
	cin>>i;
	if(i==1)
	{char c = 'y';
	while(c=='y')
	
	{node*ptr = new node();
	cout<<"enter data"<<endl;
cin>>ptr->data;
ptr->right=NULL;
ptr->left=NULL;
	root=add(root,ptr);
	
cout<<"want to insert more"<<endl;
cin>>c;
	}
	}
	if(i==2)
	preorder(root);
	if(i==3)
	inorder(root);
	if(i==4)
	postorder(root);
		if(i==5)
 {int item;
 node*pt;
 	cout<<"enter item which you want to search"<<endl;
 	cin>>item;
 pt = search(root,item);
 if(pt->data > item)
 cout<<pt->left->data<<endl;
 else
 cout<<pt->right->data<<endl;
 
 }
 if(i==6)
 {
 	levelorder(root);
 	cout<<endl;
 }
 if(i==7)
{ leftview(root);
 cout<<endl;
}
if(i==8)
{list =spiral(root);
for(int i = 0;i<list.size();i++)
cout<<list[i]<<endl;

}
	}
	
	return 0;
}