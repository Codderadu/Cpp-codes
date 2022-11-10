#include<bits/stdc++.h>
using namespace std;
int out(vector<int>& m)
{
    for(int i=0;i<m.size();i++)
    {
        cout<<m[i];
    }
    cout<<endl;
}
int main()
{
    vector<int>v1;
    int element;
    for(int i=0;i<4;i++)
    {
        cin>>element;
        v1.push_back(element);
    }
    out(v1);

}