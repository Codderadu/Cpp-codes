#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num1;
    string num2;
    cin>>num1;
    cin>>num2;
    int x=stoi(num1);
    int y=stoi(num2);
    int sum=x+y;
    string s=to_string(sum);
    cout<<(s);
}