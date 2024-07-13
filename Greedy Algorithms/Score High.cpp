//Score High

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int na, nb, nc, nd;
        cin >> na >> nb >> nc >> nd;
        if(na+nb+nc+nd == n){
            int score = max({na, nb, nc, nd});
            cout << score << endl;
        }
    }
    return 0;
}
