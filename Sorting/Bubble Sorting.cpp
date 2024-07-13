#include <bits/stdc++.h>

using namespace std;

int bubble_sort(vector<int>& v)
{
    int i,j,count=0,n=v.size();
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                count++;
            }
        }
    }
    return count;
}
int main() 
{
    int t,n,i,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        count=bubble_sort(v);
        cout<<count<<endl;
    }
}
