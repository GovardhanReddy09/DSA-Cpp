#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t,n,k,i,j; cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v(n);
        stack<int> st;
        for(i=0;i<n;i++){
            cin>>v[i];
        }
        long int height,width,area=0;
        for(i=0;i<=n;i++)
        {
            while(!st.empty() && (i==n || v[i]<v[st.top()]))
            {
                height=v[st.top()];
                st.pop();
                width=st.empty() ? i :i-st.top()-1;
                area=max(area,(height*width));
            }
            st.push(i);
        }
        cout<<area<<"\n";
    }
}
