/*
LeetCode 704 - Binary Search
Difficulty: Easy

Approach: Binary Search
Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        while( l<=h){
            int mid = l +(h-l)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if( target <nums[mid])
              h = mid -1;
              else
               l = mid+1;
        }
        return -1;
    }
};
