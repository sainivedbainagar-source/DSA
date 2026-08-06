/*
LeetCode 283 - Move Zeroes
Difficulty: Easy

Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      if (nums.size() == 0) return;
    int j = 0;
        for(int i = 0; i<nums.size();i++)
        {
            if( nums[i] != 0){
                if( i != j)
            swap( nums[j], nums[i]);
            j++;
            }
        
              
        }
    }
};
