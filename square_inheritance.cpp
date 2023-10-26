#include<iostream>
using namespace std;



class data
{
    public :
        int a;

        void getdata()
        {
            cout<<"Enter a ending number :";
            cin>>a;
        }
};

class print : public data
{
    public :
        int i;
        void printdata()
        {
            cout<<"The Series is :"<<endl;
            for(i=1;i<=a;i++)
            {
                cout<<i*i<<endl;
            }
        }
};

int main()
{

    print p;

    p.getdata();
    p.printdata();


    return 0;
}