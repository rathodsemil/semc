#include<iostream>
using namespace std;

int main()
{
  int guj,eng,state,eco,total,per,grade;
  cout<<"enter guj:";
  cin>>guj;
  cout<<"enter eng:";
  cin>>eng;
  cout<<"enter state:";
  cin>>state;
  cout<<"enter eco:";
  cin>>eco;
  total=guj+eng+state+eco;
  per=total/4;

  if(per<35)
  {
    cout<<"fail";
  }
  else if(per>35&&per<45)
  {
    cout<<" d";
  }
else if(per>45 && per<60)
  {
    cout<<" c";
  }
  else if(per>60&&per<75)
  {
    cout<<" b";
  }
  else if(per>75&&per<95)
  {
    cout<<"a";
  }
  cout<<"\n\tguj\teng\tstate\teco\ttotal\tper"<<endl;
  cout<<"\t"<<guj<<"\t"<<eng<<"\t"<<state<<"\t"<<eco<<"\t"<<total<<"\t"<<per<<"\t"<<endl;


  return 0;
}

