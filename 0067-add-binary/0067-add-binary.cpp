class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string sum = "";

        int i = a.length()-1;
        int j = b.length()-1;

        while(i >= 0 || j >= 0 || carry == 1){
            int total = carry;

            if(i >= 0){
                total += a[i] - '0';
                i--;
            }

            if(j >= 0){
                total += b[j] - '0';
                j--;
            }

            sum += to_string(total % 2);
            carry = total / 2;
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};