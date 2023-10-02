#include <iostream>
using namespace std;

class Circle
{
    private:
        int radius;

    public:
         int r = radius;
        
        void area(int r)
        {
            cout << 3.14 * r * r<<endl;
        }
         void circomfernce(int r)
        {
            cout << 3.14 * 2 * r;
        }
};

int main()
{
    int r1;
    cout << "enter radius: ";
    cin >> r1;

    Circle myCircle;
    myCircle.area(r1);
    myCircle.circomfernce(r1);
    
    return 0;
}


