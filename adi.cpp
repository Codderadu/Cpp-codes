#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
     int data;
     node *next;
    node(int data){
        this->data=data;
        this->next=NULL;

     }
 
};
void insert(node* &head,int d)
{
    node* temp= new node(d);
    temp->next=head;
    head=temp;
}
void print(node* &head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
   node*newnode=new node(10);
   node*head=newnode;
   print(head);
   insert(head,12);
   print(head);
   insert(head,15);
   print(head);
}