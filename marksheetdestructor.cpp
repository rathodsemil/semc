#include <iostream>
using namespace std;

class student
{
private:
    float  math,english,gujarati,hindi,total;
    string name;
public:
    string n;
    float  m,e,g,h, t;
    student()
    {    
        name=n;
        math= m;
        english = e;
        gujarati=g;
        hindi=h;
        total=t;
        cout<<"enter a name";
        cin>>n;
        cout << "enter math: ";
        cin >> m;
        cout << "enter engalish: ";
        cin >> e;
        cout << "enter gujarati : ";
        cin >> g;
        cout << "enter hindi : ";
        cin >> h;
        cout<<"\n";
        
        t=m+e+g+h;

        cout<<"total :"<<"\t"<<t<<endl;
    }
    float display()
    {
        cout<<"name"<<"\t"<<"math"<<"\t"<<"english"<<"\t"<<"gujarati"<<"\t"<<"hindi"<<"total";
        cout<<"\n"<<n<<"\t"<<m<<"\t"<<e<<"\t"<<g<<"\t"<<h<<"\t"<<t<<endl;
      
        }
    ~student()
    {
     cout<<"destructor is runing"<<endl;
    }
    
};

int main()
{
    student t1;
    student t2;
    t1.display();
    t2.display();

   // cout << " total: " << result <<endl;
    return 0;
}