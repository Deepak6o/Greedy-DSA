class Solution {
public:
static bool cmp(vector<int> &a,vector<int> &b)
{
    return a[1]<b[1];
}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int count=-1;
        
        vector<int> prev=intervals[0];
        for(auto i:intervals)
        {
            if(prev[1]>i[0])
            {
                count++;
            }
            else
            {
                prev=i;
            }
        }
        return count;
    }
};
