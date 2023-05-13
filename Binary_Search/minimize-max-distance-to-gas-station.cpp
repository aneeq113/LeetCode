class Solution {
public:
bool check(long double k,int z,vector<int>&s)
{
    for (int i=1;i<s.size();i++)
    {
        if (s[i]-s[i-1]>k)
        {
            int x=ceil((s[i]-s[i-1])/k)-1;
            if (x>z)
                return false;
            z-=x;
        }
    }
    return true;
}
    double minmaxGasDist(vector<int> s, int k) {
        long double st=0,en=1e9+10;
        sort(begin(s),end(s));
        while (en-st>0.000001)
        {
            long double mid=(st+en)/2;
            if (check(mid,k,s))
                en=mid;
            else
                st=mid;           
        }
        return st;
    }
};
