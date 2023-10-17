#include<iostream>
using namespace std;
class marksheet
{
 string g;
 int m,s;
 public:
 void setdata(int,int,string);
 void gettotal()

 {
    cout<<"total is :"<<m+s<<endl;

 }

 void display()
 {    
   
    cout<<g<<"\t"<<m<<"\t"<<s<<"\t"<<m+s<<"\t"<<m+s/2<<"%"<<endl;
 }

 
};
void marksheet::setdata(int a,int b, string n)
{
    
    g=n;
    m=a;
    s=b;
}

int main()
{   
    
    marksheet t[5];
    int i,a,b;
    string n;

for(i=0;i<2;i++)
{    
    cout<<"enter a name :" ;
    cin>>n;
    cout<<"enter a and b  :";
    cin>>a>>b;
    t[i].setdata(a,b,n);
}
cout<<endl<<endl;
for(i=0;i<2;i++)
{

    t[i].gettotal();

}
cout<<"name"<<"\t"<<"math"<<"\t"<<"stat"<<"\t"<<"total"<<"\t"<<"per"<<endl;
for(i=0;i<2;i++)
{

    t[i].display();

}


}

