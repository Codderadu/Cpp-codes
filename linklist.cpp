#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
void print(node*n)
{
    while(n!=NULL)
    {
      cout<< n->data;
      n=n->next;  
    }
}
int main()
{
    node*head=NULL;
    node*second=NULL;
    node*third=NULL;
    head=new node();
    second=new node();
    third=new node();
    head->data=3;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=1;
    third->next=NULL;
    print(head);
}
