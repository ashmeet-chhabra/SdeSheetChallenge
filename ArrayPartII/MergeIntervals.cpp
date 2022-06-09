#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
bool compare1(int a, int b)
{
    return a < b;
}

bool compare2(vector<int> i1, vector<int> i2)
{
    if(i1[0] == i2[0])
        return i1[1] < i2[1];
    
    return i1[0] < i2[0];
}

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n = intervals.size();
    
    sort(intervals.begin(), intervals.end());
    
    vector<vector<int>> merged;
    
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
            merged.push_back(intervals[n-1]);
        else if(intervals[i][1] < intervals[i+1][0])
            merged.push_back(intervals[i]);
        else
        {
            intervals[i+1][0] = intervals[i][0];
            if(intervals[i+1][1] < intervals[i][1])
                intervals[i+1][1] = intervals[i][1];
        }
    }
    return merged;
}
