/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool issametree(struct TreeNode* root, struct TreeNode* subRoot)
{
    if (root == NULL && subRoot == NULL)
    {
        return true;
    }
    if (root == NULL || subRoot == NULL)
    {
        return false;
    }

    if (root->val != subRoot->val)
    {
        return false;
    }
    return issametree(root->left, subRoot->left)
        && issametree(root->right, subRoot->right);

}
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
    if (root == NULL)
    {
        return false;
    }
    if (issametree(root, subRoot))
    {
        return true;
    }
    return isSubtree(root->left, subRoot)
        || isSubtree(root->right, subRoot);
}