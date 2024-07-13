//same diff
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,a,n,i,count; cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        unordered_map<long long,long long>mp;
        for(i=0;i<n;i++)
        {
            cin>>a;
            count+=mp[a-i];
            mp[a-i]++;
        }
        cout<<count<<"\n";
    }
}
