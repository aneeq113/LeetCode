int maxLength(vector<int>&ribbons,int k)
{
  int st=0,en=ribbons.size()+1;
  while (st+1<en)
  {
    int mid=(st+en)/2;
    if (check(mid,ribbons,k))
    {
      st=mid;
    }
    else
    {
      en=mid;
    }
  }
    return (st==0 ?-1:st);
} 
bool check(int o,vector<int>&r,int k)
{
  int ans=0;
  for (int i=0;i<r.size();i++) 
  {
    ans+=r[i]/o;
  }
  return (ans>=k);
}
