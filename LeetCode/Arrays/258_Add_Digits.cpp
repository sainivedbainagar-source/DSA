/*
LeetCode 258 - Add Digits
Difficulty: Easy

Approach: Mathematical
Time Complexity: O(1)
Space Complexity: O(1)
*/
class Solution {
public:
    int addDigits(int num) {
          while (num >= 10) {
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            num = sum;
        }

        return num;
    }
};
