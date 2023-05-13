    string f;
    int mid;
    bool check()
    {
        set<string>y;
        string x;
        for (int i=0;i<mid-1;i++)
            x+=f[i];
        for (int i=mid-1;i<f.size();i++)
        {
            x+=f[i];
            if (y.find(x)==y.end())
                y.insert(x);
            else
                return true;
            x.erase(begin(x));
        }
        return false;
    }
    int longestRepeatingSubstring(string s) {
        f=s;
         int n=s.size();
        int st=0,en=n;
        f=s;
        while (st+1<en)
        {
            mid=(st+en)/2;
            if (check())
                st=mid;
            else
                en=mid;
        }
        return st;
    }
