//zenny
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        set<int> s;
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            s.insert(temp);
        }
        for(auto i=s.begin();i!=s.end();i++)
        {
            if(*i < 0)
             count1=count1+ *i;
            else
             count2=count2+ *i;
        }
        cout<<count2<<" "<<count1<<endl;
    }
}

