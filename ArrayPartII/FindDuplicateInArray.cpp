#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    int freq[n] = {0};
    
    for(int i = 0; i < n; ++i)
    {
        freq[arr[i] -1 ]++;
        if(freq[arr[i] - 1] == 2)
            return arr[i];
    }
}
