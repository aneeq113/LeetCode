int shipWithinDays(vector<int>& we, int d) {
        int st=0,en=2.5e7,mid;
        while (st+1<en)
        {
            mid=(st+en)/2;
            if (check(we,d,mid))
                en=mid;
            else
                st=mid;
        }
        return st+1;
    }
    bool check(vector<int>&we,int d,int ans)
    {
        int z=0,i=0;
        while (d&&i<we.size())
        {
            if (z+we[i]>ans)
            {
                d--;
                z=0;
            }
            else
            {
                z+=we[i++];
            }
        }
      return (i==w.size());
    }
