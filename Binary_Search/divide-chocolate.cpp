int maximizeSweetness(vector<int>& sweetness, int k) {
  int st=0;en=1e9+10;
  while (st+1<en)
  {
    int mid=(st+en)/2;
    if (check(mid,sweetness,k)
       st=mid;
     else
        en=mid;
  }
        return st;
}
bool check(int o,vector<int>& s,int k)
{
  int ans=0,z=0;
  for (int i=0;i<s.size();i++)
  {
    z+=a[i];
    if (z>o)
    {
      ans++;
      z=0;
    }
  }
  return (ans>=k);
}
