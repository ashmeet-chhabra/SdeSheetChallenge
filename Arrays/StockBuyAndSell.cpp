#include <bits/stdc++.h> 
bool descending(vector<int> &prices, int n);

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    
    if(descending(prices, n))
        return 0;
    
    // brute
//     int dif, max_dif = -1;
    
//     for(int i=0; i<n-1; i++)
//         for(int j=i+1; j<n; j++)
//         {
//             dif = prices[j] - prices[i];
//             max_dif = dif > max_dif ? dif : max_dif;
//         }
    
//     return max_dif;
    
    int min = prices[0], max_dif = -1, dif;
    
    for(int i=1; i<n; i++)
    {
        if(prices[i] >= min)
        {
            dif = prices[i] - min;
            max_dif = dif > max_dif ? dif : max_dif;
        }
        else
            min = prices[i];
    }
    
    return max_dif;
}

bool descending(vector<int> &prices, int n)
{   
    for(int i=0; i<n-1; i++)
        if(prices[i] < prices[i+1])
            return false;
    
    return true;
}
