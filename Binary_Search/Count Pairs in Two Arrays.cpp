class Solution {
public:
    long long countPairs(vector<int>& nums1, vector<int>& nums2) {
        vector<int>z;
        int n=nums1.size();
        for (int i=0;i<n;i++)
            z.push_back(nums1[i]-nums2[i]);
        long long ans=0;
        sort(begin(z),end(z));
        for (int i=0;i<n;i++)
        {
            if (z[i]<=0)
                continue;
            int x=lower_bound(begin(z),end(z),-z[i]+1)-begin(z);
            ans+=i-x;
        }
        return ans;
    }
};
