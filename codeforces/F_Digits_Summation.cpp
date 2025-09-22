#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    int d1 = 0, d2 = 0;

    while(N > 0 && M > 0) {
        d1 = N % 10;
        d2 = M % 10;
    }

    cout << d1 + d2 << endl;

    return 0;
}
