#include <iostream>
using namespace std;

template <class t>
t sum(t x, t y)
{
   /*if(x>y)
    {
    return x; 
    }
    else
    {
        return y;
    }*/
    
    x>y?cout<<x:cout<<y<<endl;
    
};

int main()
{
    cout << sum(52 , 25) << endl;
    cout<<sum(20.5,30.2)<<endl;


    return 0;
}