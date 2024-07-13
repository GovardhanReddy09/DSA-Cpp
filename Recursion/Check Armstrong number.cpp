#include <bits/stdc++.h>
using namespace std;
int sum=0;
long int x;
int armstrong(int n)
{
    if(n>0)
    {
         x=n%10;
        sum=sum+pow(x,3);
        armstrong(n/10);
    }
    return(sum);
}
int main()
{
    int n;
    cin>>n;
    if(armstrong(n)==n)
     cout<<"Yes"<<endl;
    else
     cout<<"No"<<endl;
}
