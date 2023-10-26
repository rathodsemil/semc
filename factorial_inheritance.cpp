#include <iostream>
using namespace std;
class Base
{
    protected:
    int a,n=1;
    public:
    int  setA()
    {
        cout<<"enter a:";
        cin>>a;
    }

};

class derived1:public Base
{
  int i,v=1;
    public:
  void addition()
  {
   for(i=a;i>=1;i--)
   {
      v=v*a;
        
            
        }
 cout<<"factorial :"<<v<<endl;  
  }
 
};

class derived2
{
    int c;
    public:
    void setC()
    {
    cout<<"enter c:";
    cin>>c;
     }
  void product()
  {
    int i;
  for(i=1;i<=10;i++)
    cout<<c<<"\t"<<i<<"\t"<<c*i<<endl;
  }

};

int main()
{
    derived1 d1;
    d1.setA();

     d1.addition();
    derived2 d2;

    d2.setC();
    d2.product();
}