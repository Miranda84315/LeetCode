class Solution {
public:
    int romanToInt(string s) {
        char symbol[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int symbol_int[7] = {1, 5, 10, 50, 100, 500, 1000};
        
        int ans = 0;
        while(!s.empty())
        {
            int str_size = s.size();
            int index_1 = -1;
            int index_2 = -1;
            for(int i=0;i<7;i++)
            {
                if(s[0] == symbol[i])
                    index_1 = i;
                if(str_size >= 2 && s[1] == symbol[i])
                    index_2 = i;
            }
            if(index_1 >= index_2)
            {
                ans += symbol_int[index_1];
                s.erase(0, 1);
            }
            else
            {
                ans = ans + symbol_int[index_2] - symbol_int[index_1];
                s.erase(0, 2);
            }
        }
        return ans;
    }
};