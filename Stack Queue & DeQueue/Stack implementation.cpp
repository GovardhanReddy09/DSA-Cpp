#include <bits/stdc++.h>

using namespace std;

int main() 
{
    stack<int> st;
    int n,i;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        string str;
        int a;
        cin>>str;
        if(str=="push")
        {
            cin>>a;
            st.push(a);
        }
        else if(str=="pop")
        {
            if(st.empty())
            {
                cout<<"Empty\n";
            }
            else
            {
                cout<<st.top()<<'\n';
                st.pop();
            }
        }
    }
}
