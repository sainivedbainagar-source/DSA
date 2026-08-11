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
        int min_price = INT_MAX;
        int max_profit = 0;
        
        for (int price : prices) {
            
            if (price < min_price) {
                min_price = price;
            }
            
            else if (price - min_price > max_profit) {
                max_profit = price - min_price;
            }
        }
        
        return max_profit;
    }
};
