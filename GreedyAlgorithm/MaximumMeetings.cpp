#include <algorithm>

struct meeting
{
    int start;
    int end;
    int pos;
};

bool compare(meeting m, meeting n);

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n = start.size();
    meeting meet[n];
    
    for(int i = 0; i < n; ++i)
    {
        meet[i].start = start[i];
        meet[i].end = end[i];
        meet[i].pos = i + 1;
    }
    
    sort(meet, meet + n, compare);
    vector<int> ans;
    
    int limit = meet[0].end;
    ans.push_back(meet[0].pos);
    
    for(int i = 1; i < n; ++i)
        if(meet[i].start > limit)
        {
            limit = meet[i].end;
            ans.push_back(meet[i].pos);
        }
        
    return ans;
}

bool compare(meeting m, meeting n)
{
    if(m.end < n.end)
        return true;
    if(m.end == n.end && m.pos < n.pos)
        return true;
    return false;
}
