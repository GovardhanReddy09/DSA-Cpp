#include <bits/stdc++.h>

using namespace std;

void selection_sort(vector<int>& v)
{
    int i,j,n=v.size(),index;
    for(i=n-1;i>0;i--)
    {
        index=i;
        for(j=i-1;j>=0;j--)
        {
            if(v[j] >= v[index])
            index=j;
        }
        cout<<index<<" ";
        swap(v[i],v[index]);
    }
}
int main() 
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        selection_sort(v);
        cout<<endl;
    }
    return 0;
}
