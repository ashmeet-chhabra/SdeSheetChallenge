#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int freq[n] = {0}, miss, repeat, flag = 0;
    
    for(int x: arr)
        freq[x-1]++;
    
    for(int i = 0; i<n; ++i)
    {
        if(freq[i] == 0)
        {
            miss = i+1;
            flag++;
        }
        else if(freq[i] == 2)
        {
            repeat = i+1;
            flag++;
        }
        
        if(flag == 2)
            return {miss, repeat};
    }    
            
}
