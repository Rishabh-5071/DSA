#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if(w%2==0 && w > 2) { // we could have also checked the last bit ((w&1) == 0) //modern compilers do it anyways
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    // cout << ((w % 2 == 0 && w > 2) ? "YES" : "NO") << endl;

    return 0;
}