/*
LeetCode 231 - Power of Two
Difficulty: Easy

Approach: Bit Manipulation
Time Complexity: O(1)
Space Complexity: O(1)
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        vector <int> a;
        while( n>0){
            int x = n%2;
          a.push_back(x);
          n = n/2;
        }
     
        int c = 0;
        for(int i = 0; i<a.size();i++){
            if(a[i] == 1){
                c++;
            }
        }
        if( c == 1)
         return true;
         else
         return false;
    }
};
