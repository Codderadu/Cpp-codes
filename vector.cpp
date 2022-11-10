#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"";
    }
    vector<int>v2(5,50);
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i];
    }
}