#include <bits/stdc++.h>
//registration sys
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        if(mp[temp]==0)
         cout<<"OK\n";
        else
         cout<<temp<<mp[temp]<<endl;
        mp[temp]++;
    }
}

