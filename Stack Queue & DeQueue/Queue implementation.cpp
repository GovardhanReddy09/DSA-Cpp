#include <bits/stdc++.h>

using namespace std;

int main() 
{
    queue<int> q;
    int n,i;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        string str;
        int a;
        cin>>str;
        if(str=="Enqueue")
        {
            cin>>a;
            q.push(a);
        }
        else if(str=="Dequeue")
        {
            if(q.empty())
            {
                cout<<"Empty\n";
            }
            else
            {
                cout<<q.front()<<'\n';
                q.pop();
            }
        }
    }
}
