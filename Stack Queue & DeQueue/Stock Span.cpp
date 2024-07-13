#include <bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    int t,n,i; cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        stack<int> st;
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(i=0;i<n;i++)
        {
            while(!st.empty() && v[i]>=v[st.top()])
            {
                st.pop();
            }
            if(st.empty())
                cout<<(i+1)<<" ";
            else
                cout<<(i-st.top())<<" ";
            st.push(i);
        }
        cout<<"\n";
    }
}        

