#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i = 0; i < (int)nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) return true;
    }
    return false;
}

bool containsDuplicate2(vector<int>& nums) {
    unordered_set<int> seen;
    for(int num : nums) {
        if (seen.count(num)) return true;
        seen.insert(num);
    }
    return false;
}