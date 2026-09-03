/*
LeetCode 977 - Squares of a Sorted Array
Difficulty: Easy

Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        int k = nums.size()-1;
        vector<int> a(nums.size());
        int left ,right;
        while( i <= j){
          left = nums[i]*nums[i];
          right = nums[j]*nums[j];
             if(  left> right){
              a[k] = left;
               i++;
               k--;
             }
             else
              {
                 a[k]= right;
                 j--;
                 k--;
              }

        }
        return a;
    }
};
