/*
LeetCode 392 - Is Subsequence
Difficulty: Easy

Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = s.size(),k=0;
      int l = 0 ,j = 0;
      while( l< i && j < t.size()){
      if( s[l] == t[j]){
      k++;
        l++;
      }
      j++;
      }
       
         if( k==i)
           return true;
        else 
           return false;
    }
};
