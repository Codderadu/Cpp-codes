#include<bits/stdc++.h>
using namespace std;
bool searc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key) return true;
    else return false;
    searc(arr,n,i+1,key);
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    cout<<searc(arr,6,0,2);
    

}