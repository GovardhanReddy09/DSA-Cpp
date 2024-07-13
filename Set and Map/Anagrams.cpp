#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        unordered_map<char,int> mp;
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            mp[str[i]]++;
        }
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            mp[str[i]]--;
        }
        bool flag=true;
        for(auto p:mp)
        {
            if(p.second != 0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"True\n";
            else
                cout<<"False\n";
    }
    
}
