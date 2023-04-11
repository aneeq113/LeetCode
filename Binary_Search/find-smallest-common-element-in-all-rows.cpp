int smallestCommonElement(vector<vector<int>>& mat) 
    {
        int st=0,en=mat[0].size();
        for (int i=0;i<mat[0].size();i++)
        {
            bool x=1;
            for (int j=0;j<mat.size();j++) 
            {
                st=0,en=mat[0].size();
                while (st+1<en)
                {
                    int mid=(st+en)/2;
                    if (mat[j][mid]>mat[0][i])
                        en=mid;
                    else
                        st=mid;
                }
                if (mat[j][st]!=mat[0][i])
                {
                    x=0;
                    break;
                }
            }
            if (x)
                return mat[0][i];
        }
        return -1;
    }
