//discovering permutations

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<char> arr;
int N,K;
int cnt=0;
set <char> str;
void dfs()
{
    if(cnt==K)
    return;
    if(arr.size()==N)
    {
        for(auto k:arr)
        cout<<k;
        cnt++;
        cout<<"\n";
        return;
    }
    for(int i=0;i<N;i++)
    {
        if(str.count((char )'A'+i)) continue;
        arr.push_back((char )'A'+i);
        str.insert((char )'A'+i);
        dfs();
        arr.pop_back();
        str.erase((char )'A'+i);
        
    }
}
 
 int main()
 {
     int  t=1 , i(1);
     cin>>t;
     while(t--)
     {
         cin>>N>>K;
         cout<<"Case"<<" "<<i++<<":"<<"\n";
         cnt=0;
         dfs();
    }
 }

