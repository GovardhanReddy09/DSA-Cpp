#include <iostream>
using namespace std;
int main()
{
  int n,k;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
        if(i==1 || j==1 || (i+j)==n+1)
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    cout<<"\n";
  }
}
