class Solution {
public:
    bool isPalindrome(int x) {
        bool ans = false;
        if(x < 0)
            return ans;
        long int reverse = 0;
        int temp = x;
        while(x != 0)
        {
            reverse = reverse * 10 + x % 10;
            x/=10;
        }
        if(temp == reverse)
            ans = true;
        return ans;
            
    }
};