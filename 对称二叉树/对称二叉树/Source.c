#include<stdio.h>
struct TreeNode {
    int val;
     struct TreeNode *right;
     struct TreeNode *left;
 };
 
int isSymmetric2(struct TreeNode* left, struct TreeNode* right)
{
    if (left == NULL && right == NULL)
    {
        return 1;
    }
    if (left == NULL || right == NULL)
    {
        return 0;
    }
    if (left->val != right->val)
    {
        return 0;
    }
    return isSymmetric2(left->left, right->right)
        && isSymmetric2(left->right, right->left);
}
int isSymmetric(struct TreeNode* root)
{
    if (root == NULL)
    {
        return 1;
    }

    return isSymmetric2(root->left, root->right);
}