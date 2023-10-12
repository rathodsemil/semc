#include <iostream>
using namespace std;


class shop
{
  public:
  int c[6],b,n,z,i=0;
  int o[5];
  string a[6],d;

   shop()
   {
    cout<<"\n""\n";
    cout<<"******well come to saarthi paints******"<<endl<<endl;
    cout<<"customer name :";
    cin>>d;
    cout<<endl;
    cout<<"customer number  :";
    cin>>n;
    cout<<endl;
   cout<< "\t""\t""\t"<<"    *** M E N U ***"<<endl;


      a[0]="lital mastre";
      a[1]="blm paint";
      a[2]="smooth blm";
      a[3]="suraksha";
      a[4]="suraksha plush";
      a[5]="mayaka marbals";
      c[0]=3000;
      c[1]=3500;
      c[2]=4000;
      c[3]=2500;
      c[4]=3500;
      c[5]=6500;

      for(b=0;b<6;b++)
      {
        cout<<"\n"<<"\t"<<"\t"<<1+b<<"\t"<<"t"<<a[b]<<"\t"<<"\t";
        cout<<"PR."<<c[b]<<"/-"<<"\t"<<endl;
        }
    
      
      }
      void data()
      {
        start :
        cout<<"choish colars"<<endl;
        cout<<"enter choish number";
        cin>>z;
        if(z==0)
        {
          goto end;
        }
        else{
        o[i]=z;
        i++;
        goto start;
        }
 



        end:
            cout<<" ";
            }
      void bill()
      {
      


      }
       
  };








int main ()
{
 shop b1;
b1.data();

 //int m;
 //cout<<"saarthi paints"<<endl;
 //cin>>m;
 





}