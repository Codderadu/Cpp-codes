#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }

};
void levelordertravels(struct Node* root)
{
    vector<int> vt;
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* node=q.front();
        q.pop();
        if(node!=NULL)
        {
            vt.push_back(node->data) ;
            if(node->left) q.push(node->left); 
            if(node->right) q.push(node->right);
            
        }
        else if(!q.empty())
        {
               q.push(NULL);
        }

    }
    reverse(vt.begin(),vt.end());
    for(int i=0;i<vt.size();i++)
    {
        cout<<vt[i]<<" ";
    }
}
void inordered(struct Node* root)
{
    if(root==NULL) return;
    inordered(root->left);
    cout<<root->data;
    inordered(root->right);
}
int main()

{
    /*   1
         /\ 
        2  3
       /\  /\ 
       4 5 6 7
           */
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    levelordertravels(root);
   // inordered(root);

}