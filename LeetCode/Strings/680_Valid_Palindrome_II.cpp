/*
LeetCode 680 - Valid Palindrome II
Difficulty: Easy

Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0; 
        int j = s.size()-1;
        int l=-1,k=-1;
        while( i < j){
            if( s[i] != s[j]){
               l = i;
                k = j;
                break;
            }
            i++;
            j--;
        }
        if(l == -1)
         return true;
        int f1 =1 , f2 =1;
         int m,n;
         m = l+1;
         n = k;
         while( m < n){
            if( s[m] != s[n]){
                 f1 = 0;
            }
            m++;
            n--;
         }
          m= l;
          n  = k-1;
          while( m < n){
            if( s[m] != s[n]){
                 f2 = 0;
            }
            m++;
            n--;
         }
          if( f1 == 1 || f2 ==1)
          return true;
          return false;
    }
};
