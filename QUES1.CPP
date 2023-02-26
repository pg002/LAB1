#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,d;
    cout<<"Write first fraction "<<endl;
     cin>>a>>b;
    cout<<"Write second fraction"<<endl;
     cin>>c>>d;
    cout<<"Enter your choice"<<endl;
    cout<<"1.ADDITION 2.SUBTRACTION 3.DIVISION 4. MULTIPLICATION"<<endl;
    int choice;
    cin>>choice;
    switch(choice)
     {case 1:cout<<(a/b)+(c/d)<<endl;;
        break;
      case 2:cout<<(a/b)-(c/d)<<endl;;
        break;
      case 3:cout<<(a/b)/(c/d)<<endl;
        break;
      case 4:cout<<(a/b)*(c/d)<<endl;
        break;
     }
     return 0;


}