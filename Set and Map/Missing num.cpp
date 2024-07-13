#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,int> mp;
    int n,n1,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        cin>>a;
        mp[a]--;
    }
    for(auto p : mp)
    {
        if(p.second != 0)
        cout<<p.first<<" ";
    }
}
