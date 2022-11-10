#include<bits/stdc++.h>
using namespace std;
void reverseusingStack(int arr[],int n)
{
    stack<int>st;
    for(int i=0;i<n;i++)
    {
       st.push(arr[i]);
       
    }
    for(int i=0;i<n;i++)
    {
      cout<<st.top();
      st.pop();
    }
   
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=6;
    reverseusingStack(arr,n);
}