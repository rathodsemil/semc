#include <iostream>
using namespace std;

class solid
{
private:
    int len,wid,hig;
    
public:
    string n;
    int l,w,h;
    solid()
    {    
        len=l;
        wid=w;
        hig=h;

        cout<<"enter a len";
        cin>>l;
        cout << "enter wid: ";
        cin >> w;
        cout << "enter hig: ";
        cin >> h;

        cout<<"\n";


    }
    int area()
    {
       cout<<" area :"<<l*w<<endl;
      return 0;
        }

    int display(int a,int b)
    {

    cout<< a*b<<endl;
     return 0;


    }
    ~solid()
    {
     cout<<"destructor is runing"<<endl;
    }
    
};

int main()
{
    solid t1;
    
    t1.area();
    t1.display(2,3);

   // cout << " total: " << result <<endl;
    return 0;
}