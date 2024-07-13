#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int n,i,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    cout<<s.size()<<endl;
}
