#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int,int> pii;

int main() {
    int n, age, rate, y_r = 0, o_r = 0;
    cin >> n;

    priority_queue<pii, vector<pii>, greater<pii>> old;
    priority_queue<pii> young;

    for(int i = 0; i < n; i++) {
        cin >> age >> rate;
        if(young.empty() || age <= young.top().first) {
            young.push({age, rate});
            y_r += rate;
        } else {
            old.push({age, rate});
            o_r += rate;
        }
        while (young.size() > old.size() + 1) {
            old.push(young.top());
            y_r -= young.top().second;
            o_r += young.top().second;
            young.pop();
        }

        while (old.size() > young.size()) {
            young.push(old.top());
            o_r -= old.top().second;
            y_r += old.top().second;
            old.pop();
        }

        cout << abs(y_r - o_r) << '\n';
    }

    return 0;
}

