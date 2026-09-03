/*
LeetCode 219 - Contains Duplicate II
Difficulty: Easy

Approach: Sliding Window
Time Complexity: O(n)
Space Complexity: O(k)
*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {
                if (i - mp[nums[i]] <= k)
                    return true;
            }

            mp[nums[i]] = i;
        }

        return false;
    }
};
