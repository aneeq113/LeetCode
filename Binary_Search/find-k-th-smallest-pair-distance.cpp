int smallestDistancePair(vector<int>& a, int k) {
        sort(begin(a),end(a));
        int st=a[1]-a[0];
        int n=a.size();
        for (int i=2;i<n;i++)
            st=min(st,a[i]-a[i-1]);
        int en=a[n-1]-a[0]+1;
        while (st+1<en)
        {
            int mid=(st+en)/2;
            int ans=0;
            for (int i=0;i<n;i++)
            {
                int z=lower_bound(begin(a),end(a),a[i]+mid)-begin(a);
                z-=i+1;
                ans+=z;
            }
            if (ans<k)
                st=mid;
            else
                en=mid;
        }
        return st;
    }
