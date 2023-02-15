int mostFrequentEven(int* nums, int numsSize){

    // Brute Force
    int even_map[numsSize][2];
    int map_idx = 0;
    int ret = -1;
    int ret_count = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0)
        {
            bool in_map = false;

            for (int j = 0; j < map_idx; j++)
            {
                if (nums[i] == even_map[j][0])
                {
                    even_map[j][1]++;
                    in_map = true;
                }
            }
            
            if (in_map == false)
            {
                even_map[map_idx][0] = nums[i];
                even_map[map_idx][1] = 1;
                map_idx++;
            }
        }
    }
    
    for (int i = 0; i < map_idx; i++)
    {
        //printf("even_map: %d -> %d, ", even_map[i][0], even_map[i][1]);

        if (even_map[i][1] > ret_count)
        {
            ret = even_map[i][0];
            ret_count = even_map[i][1];
        }
        else if (even_map[i][1] == ret_count)
        {
            if (even_map[i][0] < ret)
            {
                ret = even_map[i][0];
            }
        }
    }

    return ret;
}