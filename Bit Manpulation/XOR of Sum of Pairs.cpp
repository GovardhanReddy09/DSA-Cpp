#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t,n,i,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        vector<int> v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            sum=sum^(v[i]);
        }
        
        cout<<sum*2<<endl;
    }
    return 0;
}
