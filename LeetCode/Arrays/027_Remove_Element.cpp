/*
LeetCode 27 - Remove Element
Difficulty: Easy

Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(int j = 0; j<nums.size();j++){
            if(nums[j] != val){
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
    }
};
