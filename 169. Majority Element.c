int majorityElement(int* nums, int numsSize){

    // using Boyer-Moore Voting Algorithm

    int majorityNum = nums[0];
    int count = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (count == 0)
        {
            majorityNum = nums[i];
        }

        if (nums[i] == majorityNum)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return majorityNum;
}