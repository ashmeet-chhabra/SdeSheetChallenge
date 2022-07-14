void getSubsets(vector<int>& arr, int i, int sum, int k, vector<int> sub, vector<vector<int>>& ans);

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    getSubsets(arr, 0, 0, k, {}, ans);
    return ans;
}

void getSubsets(vector<int>& arr, int i, int sum, int k, vector<int> sub, vector<vector<int>>& ans)
{
    if(i == arr.size())
        return;
    
    getSubsets(arr, i + 1, sum, k, sub, ans);
    sub.push_back(arr[i]);
    
    if(sum + arr[i] == k)
        ans.push_back(sub);
    
    getSubsets(arr, i + 1, sum + arr[i], k, sub, ans);
}
