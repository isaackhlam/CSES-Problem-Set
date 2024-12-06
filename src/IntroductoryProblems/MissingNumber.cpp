#include <iostream>
using namespace std;

int main(void) {
    int n;
    int m;
    int ret = 0;
    cin >> n;
    for(int i = 0; i < n - 1; i++) {
        cin >> m;
        ret ^= m;
        ret ^= i;
    }
    cout << (ret ^ n ^ (n - 1));
    return 0;
}
