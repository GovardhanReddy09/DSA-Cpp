#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,count;
    long int n,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        while(n!=0)
        {
            if((n&1)==1)
            {
                count++;
            }
            n=n>>1;
        }
        cout<<count<<endl;
    }
}
