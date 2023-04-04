int shipWithinDays(vector<int>& we, int d) {
        int st=*max_element(begin(we),end(we))-1,en=1e9+10;
        int z,i,k;
        int n=we.size();
        while (st+1<en)
        {
            int mid=(st+en)/2;
            z=0,k=0;
            for (int i=0;i<n;i++)
            {
                if (z+we[i]>mid)
                {
                    k++;
                    z=0;
                }
                z+=we[i];
            }
            k+=(z>0);
            if (k<=d)
                en=mid;
            else
                st=mid;
        }
        return st+1;
    }
