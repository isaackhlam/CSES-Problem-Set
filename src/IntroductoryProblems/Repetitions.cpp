#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    int ret = 1;
    int cur = 1;
    for(int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cur++;
        }else{
            ret = max(ret, cur);
            cur = 1;
        }
    }
    cout << max(ret, cur);
    return 0;
}
