// using bit manipulation
// (recursion not used)

vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    int n = num.size();
    int subsets = (1 << n);
    
    for(int i = 0; i < subsets; ++i)
    {
        int sum = 0;
        for(int j = 0; j < n; ++j)
        {
            if((i & (1 << j)) != 0)
                sum += num[j];
        }
        ans.push_back(sum);
    }
    
    sort(ans.begin(), ans.end());
    return ans;
}
