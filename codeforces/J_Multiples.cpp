#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    if (A == 0 || B == 0) {
        cout << "No Multiples" << endl;
        return 0;
    }

    if (A % B == 0 || B % A == 0) {
        cout << "Multiples" << endl;
    } else {
        cout << "No Multiples" << endl;
    }
    return 0;
}