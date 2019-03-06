class Solution {
public:
    char array_parentheses[6] = {'(',')','{','}','[',']'};
    int para_num[3] = {0};
    string last_parentheses = "";
    
    bool isValid(string s) {
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < 3; j++){
                
                if(s[i] == array_parentheses[j * 2]){
                    para_num[j] += 1;
                    last_parentheses = last_parentheses + s[i];
                }
                
                if(s[i] == array_parentheses[j * 2 + 1]){
                    if(para_num[j] <= 0 || (last_parentheses[last_parentheses.size() - 1] != array_parentheses[j * 2]))
                        return false;
                    
                    else{
                        para_num[j] -= 1;
                        last_parentheses = last_parentheses.substr(0, last_parentheses.size() - 1);
                    }
                }
            }
        }
        for(int i = 0; i < 3; i++){
            if(para_num[i] != 0)
                return false;
        }
        return true;
    }
};