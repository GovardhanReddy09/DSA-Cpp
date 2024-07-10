#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t,sum,n,a;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            sum=sum^a^i;
        }
        cout<<(sum^(n+1))<<endl;
    }
}
