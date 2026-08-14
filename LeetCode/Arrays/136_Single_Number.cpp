/*
LeetCode 136 - Single Number
Difficulty: Easy

Approach: Bit Manipulation (XOR)
Time Complexity: O(n)
Space Complexity: O(1)
*/
 class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
  for(int i = 0; i<nums.size();i++){
     x = x^nums[i];
  }
  return x;
    }
};
