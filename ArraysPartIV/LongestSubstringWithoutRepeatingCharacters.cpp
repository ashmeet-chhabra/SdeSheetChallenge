#include <bits/stdc++.h> 

int uniqueSubstrings(string input)
{
    //Write your code here
    int n = input.length();
    
    if(n == 1)
        return 1;
    
    set<int> mp; 
    int left = 0, right = 0, ans = 1;
    
    while(right < n)
    {
        auto itr = mp.find(input[right]);
        if(itr != mp.end())
        {
            
            int temp = input.find(*itr, left);
            for(int i = left; i <= temp; ++i)
                mp.erase(input[i]);
            left = temp + 1; 
        }
        mp.insert(input[right]);
        ans  = max(ans, right - left + 1);
        right++;
    }
    
    return ans;
}
