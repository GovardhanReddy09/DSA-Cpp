#include <iostream>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  for(int i=1;i<=k;i++)
  {
      for(int j=1;j<=n;j++)
      {
          if(i==1 || i==k || j==1 || j==n)
          {
              cout<<"*";
          }
          else
          {
              cout<<" ";
          }
      }
      cout<<"\n";
  }
}
