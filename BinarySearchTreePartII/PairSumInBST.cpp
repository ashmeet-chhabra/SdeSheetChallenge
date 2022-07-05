void inorder(BinaryTreeNode<int> *root, vector<int>& v);

bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    vector<int> v;
    inorder(root, v);
    int n = v.size();
    int i = 0, j = n - 1;
        
    while(i < j)
    {
        int sum = v[i] + v[j];
        if(sum < k)
            i++;
        else if(sum > k)
            j--;
        else
            return true;
    }
        
    return false;
}
    
 // inorder: left node right
void inorder(BinaryTreeNode<int> *root, vector<int>& v)
{
    if(root == NULL)
        return;
            
    inorder(root -> left, v);
    v.push_back(root -> data);
    inorder(root -> right, v);
}
