class Solution {
public:
    int strStr(string haystack, string needle) {
         if (needle.empty())
            return 0;

        int x = needle.size()-1;
      int   i = 0;
        int flag =-1 ;
        while( i <= haystack.size()-1){
       if( haystack[i] == needle[0]){
            int y = i;
                int j = 1;
                y++;
                while( (j<=x)&&(y<= haystack.size()-1) &&(haystack[y] == needle[j]) ){
                   
                   y++;
                 j++;
                    
                }
                if( j == x+1 ){
                    
                    return i;
                }
               
                
            }
            i++;
           
 
        }

 return -1;

    }
};
