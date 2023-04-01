int shipWithinDays(vector<int>& weights, int days) {
  int st=0,en=weights.size()+1;
  while (st+1<en)
  {
    int mid=(st+en)/2;
    if (check(weights,mid,days))
      st=mid;
    else
      en=mid;
  }
  return st;
}
bool check(vector<int>&w,int o,int k)
{
  int ans=0;
  int z=0;
  for (int i=0;i<n;i++)
  {
    z+=w[i];
    if (w[i]>=o)
    {
      ans++;
      z=0;
    }
  }
  return (ans==k);
} 
