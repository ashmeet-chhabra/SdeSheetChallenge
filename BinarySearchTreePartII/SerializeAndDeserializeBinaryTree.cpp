#include <sstream>

string serializeTree(TreeNode<int> *root)
{
    string s = "";
    
    if(!root)
        return s;
    
    queue<TreeNode<int>*> q;
    q.push(root);
        
    while(!q.empty())
    {
        TreeNode<int> *temp = q.front();
        q.pop();
        if(temp == NULL)
            s.append("0,");   
        else
        {
            s.append(to_string(temp -> data) + ",");
            
            q.push(temp -> left);
            q.push(temp -> right);
        }
    }
    
    return s;
}

TreeNode<int>* deserializeTree(string &s)
{
    if(s.length() == 0)
        return NULL;
   
    string str;
    stringstream ss(s);
    getline(ss, str, ',');
    
    TreeNode<int> *root = new TreeNode<int>(stoi(str));
    queue<TreeNode<int>*> q;
    q.push(root);
        
    while(!q.empty())
    {
        TreeNode<int> *temp = q.front();
        q.pop();
            
        getline(ss, str, ',');
        if(str == "0")
            temp -> left = NULL;
        else
        {
            temp -> left = new TreeNode<int>(stoi(str));
            q.push(temp -> left);
        }
            
        getline(ss, str, ',');   
            
        if(str == "0")
            temp -> right = NULL;
        else
        {
            temp -> right = new TreeNode<int>(stoi(str));
            q.push(temp -> right);
        }
    }
       
    return root;
}
