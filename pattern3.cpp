#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rowcol=5;
    for(int i=0;i<rowcol;i++)
    {
        for(int j=0;j<rowcol-i;j++)
        {
            cout<<"*";
        }
       cout<<endl;
    }
}