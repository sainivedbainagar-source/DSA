/*
LeetCode 121 - Best Time to Buy and Sell Stock
Difficulty: Easy

Approach: One Pass
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0;
        int min = prices[0];
        for(int i = 0; i<prices.size();i++){
          if( prices[i]<min){
            min = prices[i];
          }
          int x = prices[i]-min;
          if(x>p){
            p= x;
          }

        }
        return p;
    }
};
        return max_profit;
    }
};
