#include <iostream>
#include <vector>
#include <algorithm>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,l,r,sum=0;
    cin>>n>>q;
    vector<int>v(n);
    vector<int>s(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s[i+1]=s[i]+v[i];
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<s[r]-s[l-1]<<endl;
    }
    
    return 0;
}
