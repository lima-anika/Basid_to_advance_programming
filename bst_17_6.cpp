#include<stdio.h>
// Binary Search Tree operations in C++

#include <iostream>
using namespace std;

struct node {
   int data;
   struct node *leftChild, *rightChild;
};
struct node *root = NULL;

void insert_tree(int x)

{
    if (root==NULL)


    {

struct node *t = new node;
        t->leftChild=NULL;
        t->rightChild=NULL;
        t->data=x;

        root=t;
    }

    else
    {
        node *r = root;

        while(1)
        {

           if(x>r->data)
              {
                  if(r->rightChild==NULL)
                  {


                      struct node *t = new node;
                        t->leftChild=NULL;
                        t->rightChild=NULL;
                        t->data=x;




                         r->rightChild=t;

                        break;

                  }

                  else

                  {
                      r=r->rightChild;
                  }

              }

              else if(x<r->data)
              {

              {
                  if(r->leftChild==NULL)
                  {

                        struct node *t = new node;

                        t->leftChild=NULL;
                        t->rightChild=NULL;
                        t->data=x;

                         r->leftChild=t;


                        break;

                  }

                  else

                  {
                      r=r->leftChild;

                  }

              }
              }
        }

    }
}


void inorder(node *r2)

{

  if (r2 != NULL) {
    // Traverse left
    inorder(r2->leftChild);

    // Traverse root
    cout << r2->data << " -> ";

    // Traverse right
    inorder(r2->rightChild);
  }

}

void delete_node(node *r2,int v)

{
    if(v==r2->data)
    {

    }

    else
    {
        struct node *t = new node;
        t=r2;

        while(r2->data!=v )
        {

            if(r2->data>v)
            {
                t=r2;
                r2=r2->leftChild;



                if (r2->data==v)
                {




                if ((r2->leftChild==NULL) && (r2->rightChild==NULL))
                {
                    t->leftChild=NULL;

                    break;
                }

                else if (((r2->leftChild!=NULL) && (r2->rightChild==NULL)))

                {
                    r2=r2->leftChild;
                    r2->leftChild=NULL;

                    break;
                }

                else if (((r2->leftChild==NULL) && (r2->rightChild!=NULL)))

                {
                    r2=r2->rightChild;
                    r2->rightChild=NULL;

                    break;
                }

                }


            }

            else if (r2->data<v)

            {
                t=r2;
                r2=r2->rightChild;



                if (r2->data==v)
                {

                    if((r2->leftChild!=NULL)&&(r2->rightChild!=NULL))

                    {
                        cout<<"*********";
                    }


                if ((r2->leftChild==NULL) && (r2->rightChild==NULL))
                {
                    t->rightChild=NULL;

                    break;
                }

                else if (((r2->leftChild!=NULL) && (r2->rightChild==NULL)))

                {
                    r2=r2->leftChild;
                    r2->leftChild=NULL;
                    break;
                }

                else if (((r2->leftChild==NULL) && (r2->rightChild!=NULL)))

                {
                    r2=r2->rightChild;
                    r2->rightChild=NULL;
                    break;
                }

                }





            }
        }




    }
}



int main()

{
    insert_tree(23);  insert_tree(53);  insert_tree(28);insert_tree(208);

    inorder(root);


    delete_node(root,53);

cout<<endl<<"new"<<endl;

    inorder(root);


}
