class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        vector<int>z;
        for (auto i:m)
            for (auto j:i)
                z.push_back(j);
        sort(begin(z),end(z));
        return z[k-1];
    }
};
