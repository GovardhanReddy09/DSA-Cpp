#include <bits/stdc++.h>

using namespace std;

int main() 
{
    deque<int> q;
    int n,i;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        string str;
        int a;
        cin>>str;
        if(str=="push_back")
        {
            cin>>a;
            q.push_back(a);
        }
        else if(str=="push_front")
        {
            cin>>a;
            q.push_front(a);
        }
        else if(str=="pop_back")
        {
            if(q.empty())
            {
                cout<<"Empty\n";
            }
            else
            {
                cout<<q.back()<<'\n';
                q.pop_back();
            }
        }
        else if(str=="pop_front")
        {
            if(q.empty())
            {
                cout<<"Empty\n";
            }
            else
            {
                cout<<q.front()<<'\n';
                q.pop_front();
            }
        }
    }
}
