class SummaryRanges {
public:
    vector<int>z={};
    map<int,int>vis;
    SummaryRanges() {
        z={};
        vis.clear();
    }
    
    void addNum(int value) {
        if (!vis[value])
        {
            z.push_back(value);
            sort(begin(z),end(z));
            vis[value]=1;
        }
    }
    
    vector<vector<int>> getIntervals() 
    {
        vector<vector<int>>ans;
        int st=0,en=0;
        if (z.size()==0)
            return ans;
        if (z.size()==1)
            return {{z[0],z[0]}};
        st=en=z[0];
        for (int i=1;i<z.size();i++)
        {
            if (z[i]-1==z[i-1])
                en=z[i];
            else
            {
                ans.push_back({st,en});
                st=z[i];
                en=z[i];
            }
        }
        ans.push_back({st,en});
        cout<<ans.size()<<endl;
        return ans;
    }
};
