#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t,count;
    long int n;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        while(n!=0)
        {
            if((n & 1)==1)
                count++;
            n=n>>1;
        }
        if(count==1)
        cout<<"True"<<endl;
        else
        cout<<"False"<<endl;
    }
}
