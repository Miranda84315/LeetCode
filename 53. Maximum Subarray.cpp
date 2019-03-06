class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_value = nums[0];
        int temp_value = nums[0];
        for(int i=1; i<nums.size(); i++){
            temp_value = max(temp_value + nums[i], nums[i]);
            max_value = max(temp_value, max_value);
        }
        
        return max_value;
    }
};