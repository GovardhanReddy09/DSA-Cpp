#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c=1,d;
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    c=c<<1;
    d=a|c;
    cout<<d<<endl;
}
