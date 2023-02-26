#include<bits/stdc++.h>
using namespace std;
int main(){
    float x1,x2,y1,y2,dia;
    cout<<"Enter the coordinates x1,y1"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the coordinates x2,y2"<<endl;
    cin>>x2>>y2;
    dia=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    cout<<"Area of circle is:"<<3.14*(dia/2)*(dia/2)<<endl;
    return 0;


}