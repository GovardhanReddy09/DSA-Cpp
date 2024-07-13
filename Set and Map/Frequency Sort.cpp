#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
bool comp(int a,int b)
{
    if(mp[a] != mp[b])
     return mp[a]<mp[b];
     else
     return a<b;
}
int main() {
    int t,n,i; cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v(n);
        for(i=0; i<n ; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end(),comp);
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
        mp.clear();
    }
}
