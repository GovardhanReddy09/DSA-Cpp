//Maximum Word Frequency
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,int> mp;
    int n,i,max=0;
    cin>>n;
    string str,res;
    for(i=0;i<n;i++)
    {
        cin>>str;
        mp[str]++;
    }
    for(auto p:mp)
    {
        if(p.second >=max )
        {
            max=p.second;
            res=p.first;
        }
    }
    cout<<res<<" "<<max;
}
