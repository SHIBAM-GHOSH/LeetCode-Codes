/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool recurse(TreeNode* root, long long l, long long r)
        {
            if(root == NULL) return true;
            //cjekc curnt node
            if( root->val <= l or r <=  root->val ) return false;

            
            //check left subtree, current root.val becomes max limit for left subtree
            bool left_check = recurse(root->left, l, root->val);

            //check right subtree, current root.val becomes themin limit for right subtree nodes
            bool right_check = recurse(root->right, root->val, r);

            return (left_check and right_check);

        }

    bool isValidBST(TreeNode* root) 
    {
        if(root == NULL) return true;

        bool result = recurse(root, LLONG_MIN, LLONG_MAX);
        return result;
    }
};