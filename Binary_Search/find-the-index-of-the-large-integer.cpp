//NOT CORRET YET
int getIndex(ArrayReader &reader) {
  int st=0,en=reader.length()+1;
  while (st+1<en)
  {
    int mid=(st+en)/2;
    int z=reader.comparesub(st,mid,mid+1,en);
    if (z==1)
      en=mid;
    else
      st=mid;
  }
  return st;
}
