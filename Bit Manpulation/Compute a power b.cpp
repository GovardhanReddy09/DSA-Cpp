#include <bits/stdc++.h>
//repeated num in bits
using namespace std;

int main() 
{
    long int t,base,exp,res;
    cin>>t;
    while(t--)
    {
        cin>>base>>exp;
        res=1;
        while(exp>0)
        {
            if((exp&1)==1)
            {
                res=(base*res)%1000000007;
            }
            base=(base*base)%1000000007;
            exp=exp>>1;
        }
        cout<<res<<"\n";
    }
}
