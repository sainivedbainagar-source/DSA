class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         
        for( int i = 0 ; i<nums.size();i++){
            if( nums[i]== target){
                return i;
            }
        }
         int  j = 0;
        
       while( j<nums.size() && (target>nums[j])){
        j++;
       }
       return j;

        
    }
};
