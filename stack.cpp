#include<bits/stdc++.h>
using namespace std;
#define n 100
class stack
{
    int* arr;
    int top;
   public: 
    stack()
    {
        arr=new int[n];
        top=-1;
    }
  
   virtual void push(int x)
    {
        if(top==n-1)
        {
           cout<<"arry is full";
           return;
        }
        top++;
        arr[top]=x;
    } 
   virtual void pop()
    {
        if(top==-1)
        {
            cout<<"empty";
            return;
        }
         top--;
    }
  virtual  int Top()
    {
        if(top==-1)
        {
            return;
        }
      return arr[top];
    }
    bool empty()
    {
        return top=-1;
    }

};

int main()
{ 
    stack st;
    st.push(1);


}