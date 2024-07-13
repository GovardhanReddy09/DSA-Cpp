#include <iostream>
#include <map>
using namespace std;

int main() {
    int c,v,i,max=0; cin>>c>>v;
    string str1,str2;
    map<string,string> entry;
    map<string,int> country,chef;
    for(i=0;i<c;i++)
    {
        cin>>str1>>str2;
        entry[str1]=str2;
    }
    for(i=0;i<v;i++)
    {
        cin>>str1;
        chef[str1]++;
        country[entry[str1]]++;
    }
    for(auto p:chef)
    {
        if(p.second > max )
        {
            max=p.second;
            str1=p.first;
        }
    }
    max=0;
    for(auto p:country)
    {
        if(p.second > max )
        {
            max=p.second;
            str2=p.first;
        }
    }
    cout<<str2<<endl<<str1<<endl;
}
