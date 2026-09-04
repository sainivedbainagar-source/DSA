/*
LeetCode 268 - Missing Number
Difficulty: Easy

Approach: XOR
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = 0;
        for(int i = 1; i<=nums.size() ;i++){
             s += i;
        }
        int s1 = 0;
        for(int i = 0; i<nums.size() ;i++){
             s1 += nums[i];
        }
        return s-s1;
    }
};
