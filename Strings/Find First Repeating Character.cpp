#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int t;
    int i,j,count=0;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>str;
        for(i=0;i<str.length();i++)
        {
            for(j=i+1;j<str.length();j++)
            {
                if(str[i]==str[j])
                {
                    cout<<str[i]<<endl;
                    count++;
                    break;
                }
            }
            if(str[i]==str[j])
                break;
        }
        if(count==0)
          cout<<"."<<endl;
    }
}

