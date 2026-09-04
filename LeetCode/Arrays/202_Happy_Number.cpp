/*
LeetCode 202 - Happy Number
Difficulty: Easy

Approach: Fast and Slow Pointers
Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int >s;
        while( n != 1){
            if (s.count(n))
             return false;
             s.insert(n);
             int s = 0;
             while( n> 0)
             {
                int r= n%10;
             s += r*r;
              n = n/10;
             }
             n = s;
        }
        return true;
    }
};
        
    }
};
