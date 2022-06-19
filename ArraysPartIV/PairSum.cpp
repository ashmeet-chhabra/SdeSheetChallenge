// brute force

/*
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    int n = arr.size();
    vector<vector<int>> ans;
    
    for(int i = 0; i < n-1; ++i)
        for(int j = i + 1; j < n; ++j)
            if(arr[i] + arr[j] == s)
                ans.push_back({arr[i], arr[j]});
    
    for(int i = 0; i < ans.size(); ++i)
        sort(ans[i].begin(), ans[i].end());
    
    sort(ans.begin(), ans.end());
    
    return ans; 
}
*/

// optimal solution

#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n ; ++i)
        {
            if(mp.find(target - nums[i]) != mp.end())
            {
                ans = {i, mp[target - nums[i]]};
                return ans;
            }
            else
                mp[nums[i]] = i;
        }
        return ans;
    }
};
