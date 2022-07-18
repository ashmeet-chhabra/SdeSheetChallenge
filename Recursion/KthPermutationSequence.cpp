// brute force (causes TLE)

// #include <algorithm>

// void getPermutations(string s, bool chosen[], string& perm, vector<string>& ans);

// string kthPermutation(int n, int k)
// {
//     string s = "";
    
//     for(int i = 1; i <= n; ++i)
//         s += to_string(i);
    
//     vector<string> ans;
//     string perm = "";
//     bool chosen[n] = {false};
    
//     getPermutations(s, chosen, perm, ans);
    
//     return ans[k - 1];
// }

// void getPermutations(string s, bool chosen[], string& perm, vector<string>& ans)
// {
//     int l = s.size();
    
//     if(perm.size() == l)
//     {
//         ans.push_back(perm);
//         return;
//     }
    
//     for(int i = 0; i < l; ++i)
//     {
//         if(!chosen[i])
//         {
//             perm.push_back(s[i]);
//             chosen[i] = true;
//             getPermutations(s, chosen, perm, ans);
//             perm.pop_back();
//             chosen[i] = false;
//         }
//     }
// }
