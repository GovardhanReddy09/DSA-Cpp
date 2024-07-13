#include <iostream>
using namespace std;
int main()
{
  int n,k;
  cin>>n;
  for(int i=1;i<=(2*n-1);i++)
  {
     if(i<=n)
     {
     for(int j=1;j<=i;j++)
     {
         cout<<"*";
     }
     }
     else
     {
         for(int k=i;k<=(2*n-1);k++)
         {
             cout<<"*";
         }
     }
     cout<<"\n";
  }
}
