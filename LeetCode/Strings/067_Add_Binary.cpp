class Solution {
public:
    string addBinary(string a, string b) {

        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        string c = "";

        while (i >= 0 && j >= 0) {

            if (a[i] == '0' && b[j] == '0') {
                if (carry == 0) {
                    c += '0';
                    carry = 0;
                } else {
                    c += '1';
                    carry = 0;
                }
            }

            else if ((a[i] == '0' && b[j] == '1') ||
                     (a[i] == '1' && b[j] == '0')) {
                if (carry == 0) {
                    c += '1';
                    carry = 0;
                } else {
                    c += '0';
                    carry = 1;
                }
            }

            else { 
                if (carry == 0) {
                    c += '0';
                    carry = 1;
                } else {
                    c += '1';
                    carry = 1;
                }
            }

            i--;
            j--;
        }

        while (i >= 0) {
            if (carry == 0) {
                c += a[i];
            } else {
                if (a[i] == '0') {
                    c += '1';
                    carry = 0;
                } else {
                    c += '0';
                    carry = 1;
                }
            }
            i--;
        }

        while (j >= 0) {
            if (carry == 0) {
                c += b[j];
            } else {
                if (b[j] == '0') {
                    c += '1';
                    carry = 0;
                } else {
                    c += '0';
                    carry = 1;
                }
            }
            j--;
        }

        if (carry == 1)
            c += '1';
      int k = c.size()-1;
      int l = 0;
      while( l<k ){
       char ch = c[l];
       c[l] = c[k];
       c[k] = ch;
        l++;
        k--;
    }

        return c;
    }
};
