#include <iostream>
using namespace std;


class shop
{
  public:
  int c[6],b,n,z,i=0,mob,name;
  int o[5],m,m1[5],x1,x2,tot=0,t,g,gst=0,l,total=0;
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
        cout<<"choish colars"<<endl<<endl;
        cout<<"enter choish number :";
        cin>>z;
        cout<<endl;
        if(z==0)
        {
          goto end;
        }
      
        else
         {
             o[i]=z;
             cout<< "qty  :";
             cin>>m;
             m1[i]=m;
        i++;
        goto start;
        }

        end :
        cout<<" ";
      }
      
      void bill()
      {  
        
        
        cout<<endl;
       cout<<"    <<<<<<<<<<<<<<<<<<<<BILL>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
       cout<<"                *SAARTHI PAINTS SHOP*         "<<endl;
       cout<<"                 ~~~~~~~~~~~~~~~~~~~          "<<endl<<endl;
       cout<<"customer name   :"<<d<<endl;
       cout<<"customer number :"<<n<<endl<<endl;
       cout<<"pain name"<<"\t"<<"rate"<<"\t"<<"qty"<<"\t"<<"total"<<"\t"<<"gst"<<"\t"<<"total amt"<<endl<<endl;
       for(b=0;b<i;b++)
       {
        x1=o[b]-1;
        x2=m1[b];
        t=c[x1] *x2;
        g=t*18/100;
        l=t+g;
        tot=tot+t;
        gst=gst+g;
        total=tot+gst;

        cout<<a[x1]<<"\t"<<c[x1]<<"\t"<<x2<<"\t"<<t<<"\t"<<g<<"\t"<<l<<endl<<endl;
       }
       
       cout<<"total bill :"<<tot<<endl;
       cout<<"gst   bill :"<<gst<<endl;
       cout<<"net bill   :"<<total<<endl<<endl;
      }

      ~shop()
      {

      cout<<"  ~~~~~~~~~~~~~~~~THANK YOU~~~~~~~~~~~~~~~~";



      }
       
  };








int main ()
{
 shop b1;
b1.data();
b1.bill();
 //int m;
 //cout<<"saarthi paints"<<endl;
 //cin>>m;
 





}