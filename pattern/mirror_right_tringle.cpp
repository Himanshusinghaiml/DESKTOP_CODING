#include<iostream>
using namespace std;
int main()
{ int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)cout<<" ";
        for(int k=1;k<=i;k++)
        {
            cout<<k;
        } cout<<endl;
    }
}