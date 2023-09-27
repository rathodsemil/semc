#include<iostream>
using namespace std;

int main()
{
  int rate,qty,amt,dis,billamt,gst,netbill;
  cout<<"enter rate:";
  cin>>rate;
  cout<<"enter qty:";
  cin>>qty;
  amt=rate*qty;
  dis=(amt*5)/100l;
  billamt=amt-dis;
  gst=(billamt*18)/100;
  netbill=billamt+gst;

  cout<<"\n\trate\tqty\tamt\tdis\tbillamt\tgst\tnetbill"<<endl;
  cout<<"\t"<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t"<<gst<<"\t"<<netbill<<"\t"<<endl;


  return 0;
}

