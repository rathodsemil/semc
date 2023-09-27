#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"enter n value:";
    cin>>n;
    for(i=2;i<n;i++)
    if(i%2==0)
    {
        cout<<i<<"\t";
    }
    else
    {
     cout<<i*i<<"\t";
    }
}