#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{   
    int index1 = -1, index2;
    
    for(int i = n-2; i >= 0; i--)
        if(permutation[i] < permutation[i + 1])
        {
            index1 = i;
            break;
        }
    
    if(index1 == -1)
        reverse(permutation.begin(), permutation.end());
    else
    {
        for(int i = n-1; i > index1; i--)
            if(permutation[i] > permutation[index1])
            {
                index2 = i;
                break;
            }
        
        int temp = permutation[index1];
        permutation[index1] = permutation[index2];
        permutation[index2] = temp;
        
        reverse(permutation.begin() + index1 + 1, permutation.end());
    }
    return permutation;

        
}
