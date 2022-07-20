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

#include <algorithm>

void getPermutations(string& s, int k, string& ans);
int fact(int n);

string kthPermutation(int n, int k)
{
    string s = "", ans = "";
    
    for(int i = 1; i <= n; ++i)
            s += to_string(i);
    
    getPermutations(s, k - 1, ans);
    return ans;
}

void getPermutations(string& s, int k, string& ans)
{
    int n = s.size(), perm = fact(n - 1);
    
    if(n == 0)
        return;
    
    // index of character at 1st position in current permutation
    int j = k / perm;
    
    sort(s.begin(), s.end());
    ans += s[j];
    s.erase(j, 1);
    n--;
    
    getPermutations(s, k % perm, ans);
}

int fact(int n)
{
    if(n <= 0)
        return 1;
    
    return n * fact(n - 1);
}
