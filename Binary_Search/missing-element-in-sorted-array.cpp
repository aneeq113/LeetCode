int missingElement(vector<int>& a, int k) {
        int cnt=0;
        for (int i=1;i<a.size();i++)
        {
            if (a[i]-a[i-1]-1+cnt>=k)
                return a[i-1]+k-cnt;
            cnt+=a[i]-a[i-1]-1;
        }
        return a[a.size()-1]+k-cnt;
}
