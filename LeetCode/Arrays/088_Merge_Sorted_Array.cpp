/*
LeetCode 88 - Merge Sorted Array
Difficulty: Easy

Approach: Three Pointers
Time Complexity: O(m + n)
Space Complexity: O(1)
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int  j = nums2.size()-1;
        int k = nums1.size()-1;
        while( (i>=0) && (j>=0) ){
           if(nums1[i]>nums2[j]){
            nums1[k] = nums1[i];
            k--;
            i--;
           }
           else{
             nums1[k] = nums2[j];
             k--;
             j--;
           }
        }
        if( i>=0){
            while(i>=0){
                nums1[k]=nums1[i];
                k--;
                i--;
            }

        }
        else{
            while(j>=0){
                 nums1[k] = nums2[j];
             k--;
             j--;
            }
        }
    }
};
