#include <iostream>
using namespace std;

class data
{
public:
    int a;

    void data1()
    {
        cout << "Enter a number :";
        cin >> a;
    }
};

class setdata : public data
{

public:
    int i, b, c = 1, d = 0, e[100];

    void setdata1()
    {
        for (i = 0; i < a; i++)
        {

            e[i] = d;
            b = c + d;
            d = c;
            c = b;
        }
    }
};

class print : public setdata
{

public:
    void print1()
    {
        for (i = 0; i < a; i++)
        {
            cout << e[i] << endl;
        }
    }
};

int main()
{
    print s;
    s.data1();
    s.setdata1();
    s.print1();

    return 0;
}