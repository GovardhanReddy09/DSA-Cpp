#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>count(n-1);
        for(i=0;i<n;i++)
        {
            cin>>x;
            count[x]++;
        }
        for(i=0;i<count.size();i++)
        {
            if(count[i]==2)
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}
