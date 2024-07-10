#include<bits/stdc++.h>
//swap
using namespace std;
int main()
{
    unsigned int t,n,res,a,b,c; cin>>t;
    while(t--)
    {
        cin>>n;
        a=n&2863311530;  //odd
        b=n&1431655765;  //even
        a=a>>1;
        b=b<<1;
        c=a|b;
        cout<<c<<"\n";
    }
}
