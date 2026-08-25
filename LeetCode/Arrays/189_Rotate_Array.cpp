/*
LeetCode 189 - Rotate Array
Difficulty: Medium

Approach: Reversal Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n = nums.size();
    int l,i;
     i = 0;
     l = n-1;
     k =  k %n ;
    while( i < l){
      swap( nums[i], nums[l]);
        i++;
        l--;
    }
    i = 0;
     l = k-1;

    while( i < l){
      swap( nums[i], nums[l]);
        i++;
        l--;
    }
    
     l = n-1;
     i = k;
    while( i< l){
      swap( nums[i], nums[l]);
        i++;
        l--;
    }
    }
    
};
