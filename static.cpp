#include<iostream>
using namespace std;

class car
{



  
public:

static int a;
int i=0;






car()
{

    a++;
}

 void display()

{

    cout<<"dishplay function call..."<<i<<endl;

}

static void Display()
{

    cout <<"STATIC  DISPLAY functin call...."<<endl;
}

};

int car::a=0;
int main()
{
  car c1;
  c1.display();

  car c2;
  c2.display();

  car c3;
  c3.display();

  car c4;
  c4.Display();

 cout<<"no function call..";



}