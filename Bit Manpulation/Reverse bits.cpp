#include<bits/stdc++.h>
//reverse bits
using namespace std;
int main()
{
    unsigned int t,n,res,i; cin>>t;
    while(t--)
    {
        cin>>n;
        res=0;
        for(i=0;i<31;i++)
        {
            if((n&1)==1)
            {
                res=(res|1);
            }
            n=n>>1;
            res=res<<1;
        }
        cout<<res<<"\n";
    }
}
//
