int search(const ArrayReader& reader, int target) {
        int st=0,en=1e4+10;
        int ob=2147483647; 
        while (st+1<en)
        {
            int mid=(st+en)/2;
            int z=reader.get(mid);
            if (z==ob)
            {
                en=mid;
            }
            else if (target>z)
                st=mid;
            else
                en=mid;
        }
        if (reader.get(st)==target)
            return st;
        if (reader.get(st+1)==target)
            return st+1;
        return -1;
}
