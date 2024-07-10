#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t,n,q,sum,l,r,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long int>v(n);
        
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(i=1;i<n;i++)
        {
            v[i]+=v[i-1];
        }
        cin>>q;
        while(q--)
        {
            cin>>l>>r;
            l--;r--;
            if(l==0)
                cout<<v[r]<<"\n";
            else
                cout<<v[r]-v[l-1]<<"\n";
        }
    }
    
}
    
   //
