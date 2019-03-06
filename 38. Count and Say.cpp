class Solution {
public:
    string countAndSay(int n) {
        string ans = "";
        if(n < 1)
            return "";
        if(n == 1)
            return "1";
        string temp = "1";
        string prev_int;
        int count = 0;
        for(int i=2; i<=n;i++){
            ans = "";
            prev_int = prev_int.assign(temp, 0, 1);
            int count = 1;
            for(int i=1; i<temp.size();i++){
                if(prev_int[0] == temp[i]){
                    count += 1;
                }
                else{
                    ans = ans + to_string(count) + prev_int;
                    count = 1;
                    prev_int = temp[i];
                }
            }
            ans = ans + to_string(count) + prev_int[0];
            temp = ans;
        }
        return ans;
    }
};