#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<char,int> mp;
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            mp[str[i]]++;
        }
        char ch='.';
        for(int i=0;i<str.length();i++)
        {
            if(mp[str[i]] > 1)
            {
                ch=str[i];
                break;
            }
        }
        cout<<ch<<endl;
        mp.clear();
    }
    
}
