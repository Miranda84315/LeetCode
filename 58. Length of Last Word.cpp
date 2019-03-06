class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool start = false;
        if(s.size() == 0)
            return 0;
        for(int i=s.size() - 1; i>=0; i--){
            if(s[i] != ' '){
                start = true;
                count += 1;
            }
            else if(start)
                break;
        }
        return count;
    }
};