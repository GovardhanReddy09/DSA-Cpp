//Knap
#include <iostream>
#include <vector>
#include <iomanip>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    vector<pair<double, int>> items(N);
    for (int i = 0; i < N; i++) {
        int v, w;
        cin >> v >> w;
        items[i] = {static_cast<double>(v) / w, w};
    }
    sort(items.begin(), items.end(), greater<pair<double, int>>());

    double totalValue = 0.0;
    for (int i = 0; i < N; i++) {
        if (items[i].second <= W) {
            totalValue += items[i].first * items[i].second;
            W -= items[i].second;
        } else {
            totalValue += items[i].first * W;
            break;
        }
    }

    cout << fixed << setprecision(6) << totalValue << endl;

    return 0;
}
