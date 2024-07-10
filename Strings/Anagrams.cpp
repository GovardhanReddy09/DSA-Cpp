#include <bits/stdc++.h>

using namespace std;

int main() {
    string str,str1;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str>>str1;
        sort(str.begin(),str.end());
        sort(str1.begin(),str1.end());
        if(str==str1)
        {
            cout<<"True"<<endl;
        }
        else
        cout<<"False"<<endl;
    }
}
