//Change Making

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int coins = 0;
    int cents[] = {25, 10, 5, 1};

    for (int i = 0; i < 4; ++i) {
        coins += n / cents[i];
        n %= cents[i];
    }

    cout << coins << endl;

    return 0;
}//
