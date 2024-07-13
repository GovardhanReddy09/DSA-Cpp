#include <iostream>
#include <bits/stdc++.h>
using namespace std;

map<int,int> occ_count,min_index;
bool comp(int a,int b)
{
    if(occ_count[a] != occ_count[b])
     return occ_count[a] > occ_count[b];
    else
     return min_index[a] < min_index[b];
}
int main() {
    int k,n,i; cin>>n>>k;
    vector<int> v(n);
    for(i=0; i<n ; i++)
    {
        cin>>v[i];
        occ_count[v[i]]++;
        if(min_index.find(v[i]) == min_index.end())
        {
            min_index[v[i]]=i;
        }
    }
    sort(v.begin(),v.end(),comp);
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
