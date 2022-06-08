#include <bits/stdc++.h> 

typedef long long ll;

vector<vector<ll>> printPascal(int n) 
{
  vector<vector<ll>> pascal;
    
  for(int i=0; i<n; i++)
  {
      vector<ll> temp(i+1, 1);
      pascal.push_back(temp);
  }
    
    for(int i=2; i<n; i++)
        for(int j=1; j<i; j++)    //i+1 - 1
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
    
    return pascal;
}
