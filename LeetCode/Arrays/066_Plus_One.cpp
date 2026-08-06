/*
LeetCode 66 - Plus One
Difficulty: Easy

Approach: Simulation
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x = digits.size() -1;
        if( digits[x] < 9){
            digits[x]++;
        }
        else{
            while( x>=0 && (digits[x] == 9)){
            
            digits[x] =0;
            
            x--;
            }
            if( x< 0){
                digits.insert(digits.begin(),1);
                
            }
            else{
                digits[x]++;
            }

        }

       return digits; 
    }
};
