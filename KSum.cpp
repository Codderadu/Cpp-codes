#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int k,int n)
{
  
    int count=0;
      int i=0;
      int j=n-1;
    while(i<j)
    {
       int sum= arr[i]+arr[j];
        if(sum==k)
        {
            count++;
        }
        else if(sum>k)j--;
        else i++;

    }

    return count;
}
int main()
{
    int arr[]={1,5,7,1};
    int k=6;
    cout<<sum(arr,k,4);

    
}