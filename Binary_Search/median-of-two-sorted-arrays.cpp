double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>z;
        int i=0,j=0;
        while (i<nums1.size()&&j<nums2.size())
        {
            if (nums1[i]<nums2[j])
            {
                z.push_back(nums1[i++]);
            }
            else
            {
                z.push_back(nums2[j++]);
            }
        }
        while (i<nums1.size())
        {
            z.push_back(nums1[i++]);
        }
        while (j<nums2.size())
        {
            z.push_back(nums2[j++]);
        }
        if (z.size()%2)
        {
            return z[(z.size())/2];
        }
        else
        {
            int x=z[z.size()/2-1];
            int y=z[z.size()/2];
            return (x+y)/2.0;
        }
        return 0;
    }
