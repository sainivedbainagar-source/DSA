/*
LeetCode 136 - Single Number
Difficulty: Easy

Approach: Bit Manipulation (XOR)
Time Complexity: O(n)
Space Complexity: O(1)
*/
 int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int num : nums) {
            ans = ans ^ num;
        }

        return ans;
