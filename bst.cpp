#include<stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct node
{
  int roll;
  struct node *left;
  struct node *right;
  struct node *root=NULL;

};
 struct node *root=NULL;

void insert_node_bst(int r)
{
    if (root==NULL)
    {
        node *newnode = new node(); //create a new node
		newnode->roll=r;
		root=newnode;
		root->left=NULL;
		root->right=NULL;

    }

    else
    {
        node *n = root;

        node *nn = root;


        while (1)


        {


        if (n->roll>r)
        {
            node *n1 = n->left;

            if(n1==NULL)

            {
                node *newnode = new node(); //create a new node
		newnode->roll=r;
		n1=newnode;
		cout<<n1->roll;
		n1->left=NULL;
		n1->right=NULL;

		break;

            }

            else if (n1!=NULL)

            {
                n=n1->left;
            }
        }


        else if (n->roll<r)

        {
             node *n1 = n->right;


              if(n1==NULL)

            {
                node *newnode = new node(); //create a new node
		newnode->roll=r;
		n1=newnode;
		n1->left=NULL;
		n1->right=NULL;
		n=n1;
		break;

            }

              else if (n1!=NULL)

            {
                n=n1->right;
            }


        }

    }
    }
}





void traverseInorder(struct node* root)
{
    if (root == NULL)
        return;

    traverseInorder(root->left);

    traverseInorder(root->right);

      printf(" %d ", root->roll);
}






int main()
{

     insert_node_bst(10);
     insert_node_bst(25);
    insert_node_bst(28);
    insert_node_bst(30);
    insert_node_bst(35);
    insert_node_bst(42);

printf("%d\n",root->roll);


    return 0;
}
