/*
LeetCode 485 - Max Consecutive Ones
Difficulty: Easy

Approach: One Pass
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      
        int c = 0;
          int i = 0;
    while( i < nums.size()){
        if( nums[i] == 1){
            int m = 0;
            m++;
            i++;
            while(i < nums.size() &&  nums[i] == 1){
               m++;
               i++;  
            }
             if( m >c )
               c = m;
        }
        else
           i++;
    }
    return c ;
          
    }
};
