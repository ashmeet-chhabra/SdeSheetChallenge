#include <algorithm>

struct activity
{
    int start;
    int finish;
};

bool compare(activity a, activity b);

int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n = start.size();
    activity act[n];
    
    for(int i = 0; i < n; ++i)
    {
        act[i].start = start[i];
        act[i].finish = finish[i];
    }
    
    sort(act, act + n, compare);
    
    int limit = act[0].finish;
    int count = 1;
    
    for(int  i = 1; i < n; ++i)
        if(act[i].start >= limit)
        {
            count++;
            limit = act[i].finish;
        }
    
    return count;
    
}

bool compare(activity a, activity b)
{
    return a.finish < b.finish;
}
