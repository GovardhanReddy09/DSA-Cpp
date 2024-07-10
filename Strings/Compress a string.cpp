#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    getline(cin,str);
    int count=1,j;
        for(j=0;j<str.length();j++)
        {
            if(str[j]==str[j+1])
            {
                count++;
            }
            else
            {
                cout<<str[j]<<count;
                count=1;
            }
        }
}
