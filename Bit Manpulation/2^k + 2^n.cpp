#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,d=1,e=1,f,count;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    d=d<<1;
    for(int i=0;i<b;i++)
    e=e<<1;
    f=d+e;
    cout<<f<<endl;
}
