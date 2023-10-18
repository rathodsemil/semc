/*
-> Friend Function :
        declare in class , define outside of class
        dirctly called

-> object as Arguments and As Return
*/
#include<iostream>
using namespace std;

class Rect
{
    int l,w;
public:
    void setdata(int a,int b)
    {
        l = a, w = b;
    }
    int getArea()
    {
        return l*w;
    }
    friend Rect add(Rect);
};

Rect add(Rect x)
{
        if(x.l<x.w)
        {
         cout<<"w is largest  :";
         }
     else
         {
            cout<<"l is largest :";
         }

    
    

}

int main()
{
    Rect a,b;
    a.setdata(6,5);
    cout<<"Area of Rectangle A is :"<<a.getArea()<<endl;
    b=add(a);
}