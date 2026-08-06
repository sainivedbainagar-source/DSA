/*
LeetCode 9 - Palindrome Number
Difficulty: Easy

Approach: Reverse Number
Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        long long rev = 0;
        int y = x;
   while(x>0){
     rev = rev*10 + x % 10;
     x = x / 10;

   }
   return  rev == y ;
    }
};
