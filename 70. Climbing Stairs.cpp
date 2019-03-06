class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        int climb_array[n] = {0};
        climb_array[0] = 1;
        climb_array[1] = 2;
        for(int i=2; i<n; i++)
            climb_array[i] = climb_array[i-1] + climb_array[i-2];
        return climb_array[n-1];
    }
};