#include <iostream>
#include <set>
using namespace std;

int main() {
    set<char> s;
    int n,i,a;
    cin>>n;
    string str;
    cin>>str;
    for(i=0;i<n;i++)
    {
        str[i]=tolower(str[i]);
        s.insert(str[i]);
    }
    if(s.size() == 26)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
