#include <iostream>
using namespace std;

class data
{
public:

    int a;

    int getdata()
    {
       
        cout << "Enter a ending number :";
        cin >> a;
        return a;
    }
};

class setdata 
{
    public:
        int i;
        int b[100];

        void set(int c)
        {
            for(i=1;i<=c;i++)
            {
                b[i]=i*i*i;
            }
        }

};

class print :  public data , public setdata
{
public:
    
    void printdata()
    {
        cout << "The Series is :" << endl;
        for (i = 1; i <= a; i++)
        {
            cout << b[i]<<endl;
        }
    }
};

int main()
{

    print p;
    int x;

    x=p.getdata();
    p.set(x);
    p.printdata();

    return 0;
}