// using map/set

// #include <map>
// #include <algorithm>

// void calculate(vector<int>& num, int i, vector<int> sub, map<vector<int>, int>& mp);

// vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
// {   
//     map<vector<int>, int> mp;
//     sort(arr.begin(), arr.end());
//     calculate(arr, 0, {}, mp);
    
//     vector<vector<int>> ans;
    
//     for(auto i : mp)
//         ans.push_back(i.first);
    
//     return ans;
// }

// void calculate(vector<int>& num, int i, vector<int> sub, map<vector<int>, int>& mp)
// {
//     if(i == num.size())
//     {
//         mp[sub]++;
//         return;
//     }
    
//     calculate(num, i + 1, sub, mp);
//     sub.push_back(num[i]);
//     calculate(num, i + 1, sub, mp);
// }

// optimizing in recursion itself


