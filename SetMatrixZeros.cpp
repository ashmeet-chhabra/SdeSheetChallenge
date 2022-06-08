ros(vector<vector<int>> &matrix)
{#include <bits/stdc++.h> 
typedef long long ll;

void setZe
    ll row = matrix.size(), col = matrix[0].size();
	ll r[row] = {0}, c[col] = {0};
    
    for(ll i = 0; i < row; i++)
        for(ll j = 0; j < col; j++)
            if(matrix[i][j] == 0)
                r[i] = -1, c[j] = -1;
    
    for(ll i = 0; i < row; i++)
        for(ll j = 0; j < col; j++)
            if(r[i] == -1 || c[j] == -1)
                matrix[i][j] = 0;
}

