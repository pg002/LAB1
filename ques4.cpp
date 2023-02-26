#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int x,y,z[13]={0},sum[36000];
    for(int i=0;i<=36000;i++)
    {x=rand()%6+1;
    y=rand()%6+1;
    sum[i]=x+y;
    z[sum[i]]++;
    }
    for(int i=2;i<13;i++)
    cout<<i<<" "<<z[i]<<endl;

    return 0;
}