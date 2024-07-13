//Radio Station
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    unordered_map<string,string> s,c;
    for(int i=0;i<n;i++)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        s[s2]=s1;
    }
    for(int i=0;i<m;i++)
    {
        string s3,s4;
        cin>>s3;
        cin>>s4;
        s4.pop_back();
        cout<<s3<<" "<<s4<<"; #"<<s[s4]<<'\n';
    }

}
