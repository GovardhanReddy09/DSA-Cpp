//find and replace
#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int t,i,len;
    cin>>t; 
    while(t--)
    {
        cin>>len;
        string str;
        cin>>str;
        vector<int>count(26);
        for(i=0;i<len;i=i+2)
        {
            count[str[i]-97]=1 ;//even index 
        }
        bool flag=true;
        for(i=1;i<len;i=i+2)
        {
            if(count[str[i]-97]==1)
            { //odd index 
                flag=false; 
                break;
            }
        }
        if(flag) 
            cout<<"YES\n"; 
        else 
            cout<<"NO\n"; 
    }
}
