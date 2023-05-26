int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        int count=1;
        int ansend=v[0].first;
        for(int i=1;i<n;i++)
        {
            if(v[i].second>ansend)
            {
                count++;
                ansend=v[i].first;
            }
        }
        return count;
    }
