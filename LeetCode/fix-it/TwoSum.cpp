/**
 * Codeforces Template for "Two Sum"
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h> // Includes all standard libraries (vector, map, iostream, etc.)
using namespace std;

// The logic function
void solve() {
    int n;
    long long target;
    cin >> n >> target; // Read size and target

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // Read array elements
    }

    // Map to store {value : index}
    unordered_map<int, int> prevMap;
    
    // Logic loop
    bool found = false;
    for (int i = 0; i < n; i++) {
        long long diff = target - nums[i];

        if (prevMap.find(diff) != prevMap.end()) {
            // Found the pair!
            // Output indices (usually 1-based in CP, but using 0-based here to match your code)
            cout << prevMap[diff] << " " << i << endl;
            found = true;
            break; // Stop after finding the first valid pair
        }
        
        // Add current number to map
        prevMap.insert({nums[i], i});
    }

    if (!found) {
        cout << "-1" << endl; // Standard output if no solution exists
    }
}

int main() {
    // Fast I/O (Standard for Competitive Programming)
    ios::sync_with_stdio(0);
    cin.tie(0);

    // If the problem has multiple test cases, uncomment the loop
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }

    // For single test case:
    solve();

    return 0;
}