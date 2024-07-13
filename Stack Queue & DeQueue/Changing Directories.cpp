#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        stack<string> st;
        string com, text;
        while (n--) {
            cin >> com;
            if (com == "pwd") {
                if (st.empty()) {
                    cout << "/";
                } else {
                    stack<string> temp;
                    while (!st.empty()) {
                        temp.push(st.top());
                        st.pop();
                    }
                    if (temp.size() == 0) {
                        cout << "/";
                    }
                    while (!temp.empty()) {
                        cout << temp.top() << "/";
                        st.push(temp.top());
                        temp.pop();
                    }
                }
                cout << "\n";
            } 
            else {
                cin >> text;
                if (text[0] == '/') {
                    while (!st.empty()) {
                        st.pop();
                    }
                }
                string word;
                for (int i = 0; i < text.length(); i++) {
                    if (text[i] != '/') {
                        word += text[i];
                    } else {
                        if (word == "..") {
                            if (!st.empty()) {
                                st.pop();
                            }
                        } else {
                            st.push(word);
                        }
                        word.clear();
                    }
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
