/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** cellsInRange(char * s, int* returnSize){

    *returnSize = (s[3] - s[0] + 1) * (s[4] - s[1] + 1);
    int idx = 0;
    char **ret = (char**)malloc((*returnSize) * sizeof(char*));
    
    for (int row = s[0]; row <= s[3]; row++)
    {
        for(int col = s[1]; col <= s[4]; col++)
        {
            ret[idx] = (char*)malloc(3 * sizeof(char));
            ret[idx][0] = row;
            ret[idx][1] = col;
            ret[idx][2] = '\0';
            idx++ ;
        }
    }

    return ret;
}