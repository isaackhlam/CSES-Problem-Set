#include <iostream>
using namespace std;

int main(void) {
    long long n;
    cin >> n;
    cout << n << ' ';
    while(n != 1) {
        if (n & 1) {
            n *= 3;
            n++;
        } else {
            n >>= 1;
        }
        cout << n << ' ';
    }
    return 0;
}
