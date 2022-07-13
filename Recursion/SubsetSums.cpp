// using bit manipulation
// (recursion not used)

// vector<int> subsetSum(vector<int> &num)
// {
//     vector<int> ans;
//     int n = num.size();
//     int subsets = (1 << n);
    
//     for(int i = 0; i < subsets; ++i)
//     {
//         int sum = 0;
//         for(int j = 0; j < n; ++j)
//         {
//             if((i & (1 << j)) != 0)
//                 sum += num[j];
//         }
//         ans.push_back(sum);
//     }
    
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// with recursion

void calculate(vector<int>& num, int i, int sum, vector<int>& ans);

vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    calculate(num, 0, 0, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

void calculate(vector<int>& num, int i, int sum, vector<int>& ans)
{
    if(i >= num.size())
    {
        ans.push_back(sum);
        return;
    }
    calculate(num, i + 1, sum + num[i], ans);
    calculate(num, i + 1, sum, ans);
}
