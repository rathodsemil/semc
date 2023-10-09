
#include <iostream>
using namespace std;

class Student
{
    private:
        int marks1, marks2, marks3, marks4, total, percentage;
    
    public:
        int m1 = marks1, m2 = marks2, m3 = marks3, m4 = marks4;
        int t = total, p= percentage;

        void getTotal(int m1, int m2, int m3, int m4)
        {
            
            t = m1 + m2 + m3 + m4 ;
            p = t/4;
            cout << "Total Marks: " << t << endl;
            cout << "percentage: " << p<<endl;
        }
};

int main()
{

    Student s1[2];
    int maths[2], guj[2], eng[2], account[2];
    string a,b;
    for (int i = 0; i < 2; i++)
    {   
         if(i%2==0)
        {
        cout <<"name";
        cin>>a;
        }
        else
        {
        cout <<"name";
        cin>>b;
        }
        cout <<endl;

         
    
        cout << "enter maths: ";
        cin >> maths[i];
        cout << "enter gujarati: ";
        cin >> guj[i];
        cout << "enter english: ";
        cin >> eng[i];
        cout << "enter accounts marks: ";
        cin >> account[i];
        cout << endl;

    }

    for (int i = 0; i < 2; i++)
    {
        s1[i].getTotal(maths[i], guj[i], eng[i],account[i]);
        cout << endl;
    }

    return 0;
} 