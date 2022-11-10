#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp; 
}
int main()
{/*
    int a=10;
    int *ptr=&a;
    int **d=&ptr;
    cout<<**d<<" ";
    cout<<*d<<" ";

    cout<<*ptr;*/


    int a=2;
    int b=4;
    int*aptr=&a;
    int *bptr=&b;
    
    
   swap (aptr,bptr);
   cout<<a<<" "<<b; ;

}