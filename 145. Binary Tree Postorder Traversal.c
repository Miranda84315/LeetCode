/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void traversal(struct TreeNode* root, int* arr, int* size)
{
    if (root == NULL)
    {
        return;
    }
    traversal(root->left, arr, size);
    traversal(root->right, arr, size);
    arr[(*size)++] = root->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    
    int *ret = malloc(sizeof(int) * 100);
    *returnSize = 0;

    if (root != NULL)
    {
        traversal(root, ret, returnSize);
    }

    return ret;
}