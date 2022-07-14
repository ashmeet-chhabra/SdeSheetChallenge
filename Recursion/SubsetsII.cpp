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

// 1

// #include <algorithm>

// void calculate(vector<int>& num, int i, vector<int> sub, vector<vector<int>>& v);
// int next(int i, vector<int>& num);

// vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
// {   
//     sort(arr.begin(), arr.end());
    
//     vector<vector<int>> ans;
//     calculate(arr, 0, {}, ans);
    
//     sort(ans.begin(), ans.end());
    
//     return ans;
// }

// void calculate(vector<int>& num, int i, vector<int> sub, vector<vector<int>>& v)
// {
//     if(i == num.size())
//     {
//         v.push_back(sub);
//         return;
//     }
    
//     int j = next(i, num);
    
//     calculate(num, j, sub, v);
//     sub.push_back(num[i]);
//     calculate(num, i + 1, sub, v);
// }

// int next(int i, vector<int>& num)
// {
//     int n = num.size();
    
//     for(int j = i + 1; j < n; ++j)
//         if(num[j] != num[i])
//             return j;
    
//     return n;
// }

// 2

#include <algorithm>

void calculate(vector<int>& num, int i, vector<int>& sub, vector<vector<int>>& v);

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{   
    sort(arr.begin(), arr.end());
    
    vector<int> sub;
    vector<vector<int>> ans;
    calculate(arr, 0, sub, ans);
    
    return ans;
}

void calculate(vector<int>& num, int i, vector<int>& sub, vector<vector<int>>& ans)
{
    ans.push_back(sub);
    
    for(int j = i; j < num.size() ; ++j)
    {
        if(j != i && num[j] == num[j - 1])
            continue;
        sub.push_back(num[j]);
        calculate(num, j + 1, sub, ans);
        sub.pop_back();
    }
}

#include <algorithm>

void calculate(vector<int>& num, int i, vector<int> sub, vector<vector<int>>& v);
int next(int i, vector<int>& num);

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{   
    sort(arr.begin(), arr.end());
    
    vector<vector<int>> ans;
    calculate(arr, 0, {}, ans);
    
    sort(ans.begin(), ans.end());
    
    return ans;
}

void calculate(vector<int>& num, int i, vector<int> sub, vector<vector<int>>& v)
{
    if(i == num.size())
    {
        v.push_back(sub);
        return;
    }
    
    int j = next(i, num);
    
    calculate(num, j, sub, v);
    sub.push_back(num[i]);
    calculate(num, i + 1, sub, v);
}

int next(int i, vector<int>& num)
{
    int n = num.size();
    
    for(int j = i + 1; j < n; ++j)
        if(num[j] != num[i])
            return j;
    
    return n;
}
