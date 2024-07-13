#include <bits/stdc++.h>
using namespace std;
int sum=0;
long int x;
int armstrong(int n,int p)
{
    if(n>0)
    {
         x=n%10;
        sum=sum+pow(x,p);
        armstrong(n/10,p);
    }
    return(sum);
}
int main()
{
    int n;
    cin>>n;
    int p=log10(n)+1;
    if(armstrong(n,p)==n)
     cout<<"Yes"<<endl;
    else
     cout<<"No"<<endl;
}
