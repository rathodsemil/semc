#include<iostream>
using namespace std;
class Rect
{
    int l,w;
public:
    void setdata()
    {
        cout << "Enter the value l :";
        cin >> l; 
        
        cout << "Enter the value w :";
        cin >> w;
    }
    friend Rect add(Rect);
};
Rect add(Rect x)
{
        if(x.l>x.w)
        {
         cout<<"l is largest  :";
         }
     else
         {
            cout<<"w is largest :";
         }
}

int main()
{
    Rect a,b;
    a.setdata();
    b=add(a);
}