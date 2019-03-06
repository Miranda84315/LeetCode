class Solution {
public:
    string addBinary(string a, string b) {
        int max_length = max(a.length(), b.length());
        while(a.length()<max_length)
            a = '0' + a;
        while(b.length()<max_length)
            b = '0' + b;
        int carry = 0;
        string ans = "";
        for(int i=max_length - 1; i>=0; i--){
            int sum = int(a[i] - '0') + int(b[i] - '0') + carry;
            if(sum>=2)
            {
                sum -=2;
                carry = 1;
            }
            else
                carry = 0;
            ans = to_string(sum) + ans;
        }
        if(carry)
            ans = '1' + ans;
        return ans;
    }
};