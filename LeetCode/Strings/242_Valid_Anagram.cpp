/*
LeetCode 242 - Valid Anagram
Difficulty: Easy

Approach: Frequency Array
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int f[26] = {0};
      
        for(int i = 0; i<s.size();i++)
          f[ s[i] -'a']++;
          for( int i =0 ; i<t.size();i++)
           f[ t[i] - 'a']--;
           for(int i = 0 ;i<26;i++){
            if( f[i] != 0)
            return false;
           }
             return true;
    }
};
