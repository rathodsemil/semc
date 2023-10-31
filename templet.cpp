#include <iostream>
using namespace std;

template <class t>
t sum(t x, t y)
{

    return x+y; 
}

int main()
{
    cout << sum(52, 25) << endl;

    return 0;
}