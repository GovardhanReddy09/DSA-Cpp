#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t,count,n,b,a;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>a>>b;
        n=a^b;
        while(n!=0)
        {
            if((n&1)==1)
            count++;
            n=n>>1;
        }
        cout<<count<<endl;
    }
}
