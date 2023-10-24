
#include<stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include<iostream>

struct node
{
  int roll;
  struct node *left;
   struct node *right;

};

struct node *root=NULL;


void inorder(node *p) {
   if (p != NULL) {
      inorder(p->left);

      printf("%d\n",p->roll);
      inorder(p->right);
   }
}




void insert_node(int r)
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
        node *newr=root;

        while(1)
        {
            if (newr->roll>r)
            {
                if (newr->left==NULL)
                {
                    newr=newr->left;
                    newr->roll=r;

                    newr->left=NULL;

                    newr->right=NULL;

                    break;
                }

                else
                {
                    newr=newr->left;
                }
            }

            else if (newr->roll<r)
            {
                if (newr->right==NULL)
                {
                    newr=newr->right;
                    newr->roll=r;

                    newr->left=NULL;

                    newr->right=NULL;

                    break;
                }

                 else
                {
                    newr=newr->right;
                }
            }


        }
    }
}

int main()

{

    int i,n=7;

        insert_node(4);
        insert_node(14);
        insert_node(9);
        insert_node(33);
        insert_node(12);

        insert_node(1);
        insert_node(100);
        insert_node(85);


        inorder(root);

    return 0;
}
