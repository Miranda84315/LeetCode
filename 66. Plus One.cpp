class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1] += 1;
        int addTen = 0;
        for(int i = digits.size()-1; i>=0; i--){
            digits[i] += addTen;
            if(digits[i] >= 10){
                addTen = 1;
                digits[i] -= 10;
            }
            else
                addTen = 0;
        }
        if(digits.size()>0 && digits[0] == 0){
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};