/*
LeetCode 172 - Factorial Trailing Zeroes
Difficulty: Medium

Approach: Counting Factors of 5
Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    int trailingZeroes(int n) {
        int c = 0;
        while( n>0){
            n = n/5;
            c += n;
        }
        return c;
    }
};
