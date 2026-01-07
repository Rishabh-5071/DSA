#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int solved_count = 0;

    while(n--) {
        int p, v, t;
        cin >> p >> v >> t;

        if(p + v + t >= 2) {
            solved_count++;
        }
    }

    cout << solved_count << endl;
    
    return 0;
}

//Time : O(N)
//Space: O(1) 