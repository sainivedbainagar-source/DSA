/*
LeetCode 20 - Valid Parentheses
Difficulty: Easy

Approach: Stack
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        char ch ;
    int i = 0;
         while(  i<s.size()){
            ch = s[i];
            if( ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else {
                 if( st.empty())
                  return false;
                  if ( ch == ')' && st.top() != '(' || ch == ']' && st.top() != '[' ||  ch == '}' && st.top() != '{'   )
                   return false;
                   st.pop();
            }
            i++;
         }
         return st.empty();
    }
};
};
