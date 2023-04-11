vector<int> shortestDistanceColor(vector<int>& colors, vector<vector<int>>& q)
{
    vector<int>ans;
    vector<int>ind[4];
    for (int i=0;i<colors.size();i++)
    {
        ind[colors[i]].push_back(i);
    }
    for (auto i:q)
    {
        int a=i[0],b=i[1];
        if (ind[b].size()==0)
        {
            ans.push_back(-1);
            continue;
        }
        int z=lower_bound(begin(ind[b]),end(ind[b]),a)-begin(ind[b]);
        if (z<ind[b].size())
        {
            int x=abs(a-ind[b][z]);
            if (z>0)
            {
                x=min(abs(a-ind[b][z-1]),x);
            }
            ans.push_back(x);
        }
        else
        {
            ans.push_back(abs(a-ind[b][z-1]));
        }
    }        
    return ans;
}
