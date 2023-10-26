#include <iostream>
using namespace std;
class Base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enter a:";
        cin>>a;
    }

};

class derived1:public Base
{
    int b;
    public:
    void setB()
    {
    cout<<"enter b:";
    cin>>b;
     }
  void addition()
  {
    cout<<"addition of a and b is :"<<a+b<<endl;
  }

};

class derived2:public Base
{
    int c;
    public:
    void setC()
    {
    cout<<"enter b:";
    cin>>c;
     }
  void product()
  {
    cout<<"addition of a and c is :"<<a*c<<endl;
  }

};

int main()
{
    derived1 d1;
    d1.setA();
    d1.setB();
     d1.addition();
    derived2 d2;
    d2.setA();
    d2.setC();
    d2.product();
}