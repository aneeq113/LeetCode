int findInMountainArray(int target, MountainArray &ma) {
        int st=0,en=ma.length();
        while (st+1<en)
        {
            int mid=(st+en)/2;
            if (ma.get(mid)<ma.get(mid+1))
                st=mid;
            else
                en=mid;
        }
        int st1=0,en1=st+1;
        while (st1+1<en1)
        {
            int mid=(st1+en1)/2;
            int z=ma.get(mid);
            if (target==z)
            {
                return mid;
            }
            if (target<z)
                en1=mid;
            else
                st1=mid;
        }
        if (ma.get(st1)==target)
            return st1;
        st1=st+1,en1=ma.length();
        while (st1+1<en1)
        {
            int mid=(st1+en1)/2;
            int z=ma.get(mid);
            if (target==z)
            {
                return mid;
            }
            if (target>z)
                en1=mid;
            else
                st1=mid;
        }
        if (ma.get(st1)==target)
            return st1;
        return -1; 
    }
