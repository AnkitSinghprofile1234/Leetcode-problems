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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};

        vector<vector<int>> result;
        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()){
            int levelsize = q.size();
            vector<int> temp;

            while(levelsize--){
                TreeNode* t = q.front();
                q.pop();

                temp.push_back(t->val);

                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }

            
            if(!leftToRight){
                reverse(temp.begin(), temp.end());
            }

            result.push_back(temp);

            leftToRight = !leftToRight; 
        }

        return result;
    }
};