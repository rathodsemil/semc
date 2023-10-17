#include <iostream>
using namespace std;

class bank
{
private:
    int money;
    
public:
    int m;
    int n;
    int v=500;
    int withdraw()
    {    
        money=m;

        
            cout<<"enter money :";
            cin>>m;

            if(v>=m)
            {
                v=v-m;
                cout<<"Remaining Balance :"<< v<< endl;
            }
            else
            {
                cout<<"Insufficient Bal";
            }

        cout<<"\n";
return 0;

    }
    int deposit()
    {

        money=m;
            cout<<"enter money :";
            cin>>m;

            v=v+m;
            cout<<"Your updated Balance :"<< v <<endl;
        
    
return 0;
 
    }
   

    ~bank()
    {
     cout<<"thank you "<<endl;
    }


    
};

int main()
{
    bank b1;
   int n; 
    cout<<"1) Withdraw"<< endl << "2)Deposit"<<endl;
    cout<<"Enter your choice";
    cin>>n;

    if(n==1)
    {
        b1.withdraw();
    }
    else if(n==2)
    {
        b1.deposit();
    }
    else{
        cout<<"Enter proper choice";
    }
   // cout << " total: " << result <<endl;
    return 0;
}