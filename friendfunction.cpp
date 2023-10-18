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
    void setdata(int a, int b)
    {
        l = a, w = b;
    }
    int getArea()
    {
        return l*w;
    }
    friend Rect add(Rect,Rect,Rect,Rect);
};

Rect add(Rect m ,Rect n,Rect x,Rect y)
{
    Rect t;
    t.l = m.l + n.l + x.l - y.l;
    t.w = m.w + n.w + x.w - y.w;
    return t;
}

int main()
{
    Rect a,b,c,d,e;
    a.setdata(4,5);
    cout<<"Area of Rectangle A is :"<<a.getArea()<<endl;
    b.setdata(7,8);
    cout<<"Area of Rectangle B is :"<<b.getArea()<<endl;
    d.setdata(2,3); 
    cout<<"Area of Rectangle D is :"<<d.getArea()<<endl;
    e.setdata(6,9);
    cout<<"Area of Rectangle E is :"<<e.getArea()<<endl;

    c = add(a,b,d,e);
    cout<<"Area of Retangle C is :"<<c.getArea()<<endl;
}