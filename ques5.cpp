#include<bits/stdc++.h>
using namespace std;
int main(){
   int x[1000]={0};
   for(int i=0;i<1000;i++)
   x[i]=1;

   for(int i=2;i<1000;i++)
    {for(int j=i+1;j<1000;j++)
      {if((j%i)==0)
      x[j]=0;}}

      cout<<"Prime number between 1 and 1000"<<endl;
      for(int i=2;i<1000;i++)
      {
        if(x[i]==1)
        cout<<i<<" ";
      }
      return 0;
   


}