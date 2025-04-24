class Solution {
public:
void help(TreeNode* root, vector<int> &v){
     if(!root)return;
      
        help(root->left,v);
        help(root->right,v);
        v.push_back(root ->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        help(root,v);
        return v;
        
    }
};