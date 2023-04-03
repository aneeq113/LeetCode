int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int n=binaryMatrix.dimensions()[0],m=binaryMatrix.dimensions()[1];
        int z=100000;
        for (int i=0;i<n;i++)
        {
            int st=-1,en=m;
            bool w=0;
            while (st+1<en)
            {
                int mid=(st+en)/2;
                if (binaryMatrix.get(i,mid))
                {
                    en=mid;
                    z=min(z,mid);
                }
                else
                    st=mid;
            }
        }
        if (z==100000)
            return -1;
        return z;
}
