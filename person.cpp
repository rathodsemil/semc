#include <iostream>
using namespace std;

class Person
{
    private:
        int age;
        string name, city;

    public:

        void setName(string n)
        {
            name = n;
        }
        void setCity(string c)
        {
            city = c;
        }
        void setAge(int a)
        {
            age = a;
        }

        void getName()
        {
            cout << "Name: " << name << endl;   
        }
        void getCity()
        {
            cout << "City: " << city << endl;
        }
        void getAge()
        {
            cout << "Age: " << age;
        }
};

int main()
{
    Person p1;
    int userAge;
    string x, y;

    cout << "enter name: ";
    cin >> x;
    cout << "enter city: ";
    cin >> y;
    cout << "enter age: ";
    cin >> userAge;

    p1.setName(x);
    p1.setCity(y);
    p1.setAge(userAge);

    p1.getName();
    p1.getCity();
    p1.getAge();
    return 0;
}


