#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
int max_activities(vector<pair<int, int>> activities) {
    sort(activities.begin(), activities.end(), compare);

    int max_act = 0;
    int lastEnd = 0;

    for (pair<int,int> activity : activities) {
        if (activity.first >= lastEnd) {
            max_act++;
            lastEnd = activity.second;
        }
    }

    return max_act;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        vector<pair<int,int>> activity(N);
        for (int i = 0; i < N; i++) {
            cin >> activity[i].first >> activity[i].second;
        }
        cout << max_activities(activity) << endl;
    }
    return 0;
}
