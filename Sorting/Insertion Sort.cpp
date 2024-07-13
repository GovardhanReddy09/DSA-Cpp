#include <bits/stdc++.h>

using namespace std;

void insertion_sort(vector<int>& v)
{
    int i,j,temp,n=v.size();
    for(i=1;i<n;i++)
    {
        temp=v[i];
        j=i-1;
        while(j>=0 && temp<v[j])
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=temp;
        cout<<j+1<<" ";
    }
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
        insertion_sort(v);
        cout<<endl;
    }
    return 0;
}
