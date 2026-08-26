/*
LeetCode 54 - Spiral Matrix
Difficulty: Medium

Approach: Boundary Traversal
Time Complexity: O(m × n)
Space Complexity: O(1)
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
          vector <int> a;
         int l = 0;
         int r = matrix[0].size()-1;
         int  t = 0;
         int  b= matrix.size()-1;
         while( t<= b && l<= r){
                 for( int i = l; i<=r;i++)
                   a.push_back(matrix[t][i]);
                   t++;
                   for(int i = t;i<=b;i++){
                    a.push_back(matrix[i][r]);
                   }
                   r--;
                   if( t <= b){
                    for( int j = r; j>=l;j--){
                        a.push_back(matrix[b][j]);
                    }
                      b--;
                   }
                   if( l<=r){
                    for( int j =b; j>= t;j--){
                        a.push_back(matrix[j][l]);
                    }
                      l++;
                   }


         }
  return a;
    }
};
