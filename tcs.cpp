#include<bits/stdc++.h>
using namespace std;
int NumberofBall(int arr[],int n)
{
    int sum=0;
    int need;
    int j=1;
    for(int i=0;i<n;i++)
    {   
        need=(j*j-arr[i]);
        sum+=need;
        j++;
        
    }
    return sum;
}
int main()
{
    int arr[]={1,2,7,13};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<< NumberofBall(arr,n);
}