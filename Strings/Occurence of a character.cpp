#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    char ch;
    int count=0;
    getline(cin,str);
    cin>>ch;
    for(int i=0;i<str.length();i++)
    {
        if(ch==str[i])
        {
            count++;
        }
    }
    cout<<count;
    cout<<endl;
}
