#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Step 1: Count frequencies
        // map: {number -> count}
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }
        
        // Step 2: Group numbers by their frequency
        // buckets[i] will store all numbers that appeared 'i' times
        vector<vector<int>> buckets(n + 1);
        for (auto const& [num, freq] : counts) {
            buckets[freq].push_back(num);
        }
        
        // Step 3: Build the result from right to left (highest frequency first)
        vector<int> result;
        for (int i = n; i >= 0 && result.size() < k; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }
        
        return result;
    }
};