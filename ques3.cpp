#include<bits/stdc++.h>
using namespace std;
int main(){
  int accbal,choice,wthdrw,dpst;
   cout<<"Enter the account balance"<<endl;
   cin>>accbal;
   cout<<"What you want 1.withdraw and 2. Deposit"<<endl;
   cin>>choice;
  switch(choice){
    case 1:cout<<"Amount to be withdraw:"<<endl;
           cin>>wthdrw;
           if(wthdrw>accbal)
            cout<<"Balance is low"<<endl;
           else
            {cout<<"New account balance"<<endl;
            cout<<accbal-wthdrw<<endl;}
            break;
    case 2:cout<<"Amount to be deposit"<<endl;
           cin>>dpst;
           cout<<accbal+dpst<<endl;
           break;

  }
  return 0;
  
}