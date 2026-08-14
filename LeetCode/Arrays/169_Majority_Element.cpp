/*
LeetCode 169 - Majority Element
Difficulty: Easy

Approach: Boyer-Moore Voting Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int x = nums[0];
      int c = 1;
      for(int i  = 1; i<nums.size();i++){
        if( nums[i] == x){
            c++;

        }
        else if( nums[i] != x){
           
           c--;
            if( c==0){
            x = nums[i];
            c++;
            }
        }
         
      }

      return x;
        
    }
};
