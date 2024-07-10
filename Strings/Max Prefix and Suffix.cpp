#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int i=0,j=1,start=1;
    cin>>str;
    while(j<str.length())
    {
        if(str[i]==str[j])
        {
            i++;
            j++;
        }
        else
        {
            j=start;
            i=0;
            start++;
        }
    }
    cout<<i;
}


//   Another logic using built in library:-
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    
    cin>>str;
    int i,len=str.length();
    for(i=0;i<str.length();i++)
    {
        if(str.substr(0,len-1-i)==str.substr(i+1))
        {
            cout<<len-1-i;
            break;
        }
    }

}
*/
