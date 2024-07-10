#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            count++;
        }
    }
    if(count==str.length())
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}
