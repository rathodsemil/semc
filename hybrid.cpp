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
    protected:
    int b;
    public:
    void setB()
    {
    cout<<"enter b:";
    cin>>b;
     }

};

class derived2
{   
    
    protected:
    int c;
    public:
    void setC()
    {
    cout<<"enter c:";
    cin>>c;
    }

};
class test:public derived1,public derived2
{
public:
void product()
 {
    cout<<"product of a,b and c is :"<<a*b*c<<endl;
 }


};

int main()
{
test t;
t.setA();
t.setB();
t.setC();
t.product();
}