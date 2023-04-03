int getIndex(ArrayReader &reader) {
  int st=0,en=reader.length();
  while (st+1<en)
  {
    int mid=(st+en)/2;
    int z=reader.compareSub(st,mid-1,mid,mid+(mid-st)-1);
    if (z==1)
      en=mid;
    else
      st=mid;
  }
  return st;
}
