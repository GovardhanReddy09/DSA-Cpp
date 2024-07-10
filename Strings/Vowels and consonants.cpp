#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    char ch;
    int count=0,count1=0;
    getline(cin,str);
    cin>>ch;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
   cout<<count<<" ";
   cout<<count1;
    cout<<endl;
}
