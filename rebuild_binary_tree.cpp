/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) 
    {
        if(pre.size()==0)  return NULL;
        vector<int>first1,first2;
        vector<int>mid1,mid2;
        int root,id;
        root = pre[0];
        for(int i=0;i<vin.size();i++)
        {
              if(vin[i]==root)
              {
                  id = i;
                  break;
              }
        }
        TreeNode *pNode = new TreeNode(root);
        for(int i=0;i<id;i++)     mid1.push_back(vin[i]);
        for(int i=id+1;i<vin.size();i++)  mid2.push_back(vin[i]);
        for(int i=1;i<=mid1.size();i++)  first1.push_back(pre[i]);
        for(int i=mid1.size()+1;i<pre.size();i++)  first2.push_back(pre[i]);
        pNode->left = reConstructBinaryTree(first1,mid1);
        pNode->right = reConstructBinaryTree(first2,mid2);
        return pNode;
    }
};
