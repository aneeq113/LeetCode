bool com(vector<int>a,vector<int>b)
{
    return a[1]<b[1];
}  
class Solution
{
public:
int maxValue(vector<vector<int>>& ev,int k)
{
    int n=ev.size();
    sort(ev.begin(), ev.end(),com);
    map<int,int>dp={{0,0}},dp1={{0,0}};
    for (int i=0;i<k;i++)
    {
        for (int j=0;j<n;j++)
        {
            int pos=prev(dp.lower_bound(ev[j][0]))->second;
            if (pos+ev[j][2]>dp1.rbegin()->second)
            {
                dp1[ev[j][1]]=pos+ev[j][2];
            }
        }
        swap(dp,dp1);
        dp1={{0,0}};
    }
    return dp.rbegin()->second;
}  
};
