#include<bits/stdc++.h>
using namespace std;  

int main()
{
    vector<pair<int,int>> v1;
    int arr[]={2,7,11,15};
    int t=9;    
    int n=4;
    for(int i=0;i<n;i++)
    {
        v1.push_back(make_pair(arr[i],i));
    }
   sort(v1.begin(),v1.end());
     int s=0;
     int e=n-1;
     int count=0;
    while(s<e)
    {
        int sum =v1[s].first+v1[e].first;
        if(sum==t) 
        {
            count++;
        }
        else if(sum>t)e--;
        else s++;

    }
    cout<<count;
}