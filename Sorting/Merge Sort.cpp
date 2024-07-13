//Merge sort
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& v, int l, int m, int r);
void merge_sort(vector<int>& v, int left, int right);

int main() {
    int n, i,a;
    vector<int>v;
    while(cin>>a){
        v.push_back(a);
    }
    merge_sort(v, 0,v.size()-1);
    for (int a : v) {
        cout << a << " ";
    }
    return 0;
}

void merge_sort(vector<int>& v, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(v, left, mid);
        merge_sort(v, mid + 1, right);
        merge(v, left, mid, right);
    }
}

void merge(vector<int>& v, int l, int m, int r) {
    int i = l, j = m + 1;
    vector<int> temp;
    while (i <= m && j <= r) {
        if (v[i] < v[j]) {
            temp.push_back(v[i]);
            i++;
        }
        else {
            temp.push_back(v[j]);
            j++;
        }
    }
    while (i <= m) {
        temp.push_back(v[i]);
        i++;
    }
    while (j <= r) {
        temp.push_back(v[j]);
        j++;
    }
    for (i = l; i <= r; i++) {
        v[i] = temp[i - l];
    }
}
//
