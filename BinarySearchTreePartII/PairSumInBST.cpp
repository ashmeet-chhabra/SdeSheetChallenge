// brute

// void inorder(BinaryTreeNode<int> *root, vector<int>& v);

// bool pairSumBst(BinaryTreeNode<int> *root, int k)
// {
//     // Write your code here
//     vector<int> v;
//     inorder(root, v);
//     int n = v.size();
//     int i = 0, j = n - 1;
        
//     while(i < j)
//     {
//         int sum = v[i] + v[j];
//         if(sum < k)
//             i++;
//         else if(sum > k)
//             j--;
//         else
//             return true;
//     }
        
//     return false;
// }
    
//  // inorder: left node right
// void inorder(BinaryTreeNode<int> *root, vector<int>& v)
// {
//     if(root == NULL)
//         return;
            
//     inorder(root -> left, v);
//     v.push_back(root -> data);
//     inorder(root -> right, v);
// }

// optimized solution

class BSTiterator
{
    stack<TreeNode*> stk;
    bool reverse;
    
public:
    BSTiterator(TreeNode *root, bool isReverse)
    {
        reverse = isReverse;
        pushAll(root);
    }

    int next()
    {
        TreeNode *temp = stk.top();
        stk.pop();
        if(!reverse)
            pushAll(temp -> right);
        else
            pushAll(temp -> left);
        return temp -> val;
    }

    bool hasNext()
    {
        return !stk.empty();
    }
    
    void pushAll(TreeNode* root)
    {
        if(reverse == true)
        {
            while(root != NULL)
            {
                stk.push(root);
                root = root -> right;
            }
        }
        else
        {
            while(root != NULL)
            {
                stk.push(root);
                root = root -> left;
            }
        }
    }
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root)
            return false;
        
        BSTiterator l(root, false), r(root, true);
        
        int i = l.next(), j = r.next();
        
        while(i < j)
        {
            if(i + j < k)
                i = l.next();
            else if(i + j > k)
                j = r.next();
            else
                return true;
        }
        
        return false; 
    }
};
