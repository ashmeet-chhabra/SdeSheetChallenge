TreeNode<int>* lca(TreeNode<int>* root ,int n1 ,int n2);

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	//    Write your code here
    TreeNode<int> *ans = lca(root, x, y);
    return ans -> data;
}

TreeNode<int>* lca(TreeNode<int>* root ,int n1 ,int n2)
{
    //Your code here
    if(root == NULL || root -> data == n1 || root -> data == n2)
        return root;
            
    TreeNode<int> *left = lca(root -> left, n1, n2);
    TreeNode<int> *right = lca(root -> right, n1, n2);
        
    if(left == NULL)
        return right;
    else if(right == NULL)
        return left;
    else
        return root;
}
