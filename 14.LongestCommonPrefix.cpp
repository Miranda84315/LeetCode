class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        else
            return getLongest(strs, 0, strs.size() - 1);
    }
    
    string commonPrefix(string left_str, string right_str){
        int min_string = min(left_str.size(), right_str.size());
        string temp = "";
        for(int i = 0; i < min_string; i++){
            if(left_str[i] != right_str[i])
                return temp;
            else
                temp += left_str[i];
        }
        return temp;
    }
    
    string getLongest(vector<string>& strs, int left, int right){
        if(left == right)
            return strs[left];
        int mid = (left + right) / 2;
        string left_LCP = getLongest(strs, left, mid);
        string right_LCP = getLongest(strs, mid + 1, right);
        return commonPrefix(left_LCP, right_LCP);
    }
};