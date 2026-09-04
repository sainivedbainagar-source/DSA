/*
LeetCode 414 - Third Maximum Number
Difficulty: Easy

Approach: One Pass
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long f=LLONG_MIN,s=LLONG_MIN,t= LLONG_MIN;
        for(int i = 0; i<nums.size() ;i++){
          if( nums[i] > t && nums[i] > s && nums[i] > f){
                
                 t = s;
                  s = f;
                  f = nums[i];
          }
          else  if( nums[i] > t && nums[i] > s && nums[i] < f){
                 t =s;
                 s = nums[i];
          }
         else  if( nums[i] > t && nums[i] < s && nums[i] < f){
                 t = nums[i];
          }
        }
          if( t== LLONG_MIN)
           return f;
           else
           return t;
    }
};
