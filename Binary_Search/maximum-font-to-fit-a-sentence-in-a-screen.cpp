int maxFont(string text, int w, int h, vector<int>& fonts, FontInfo fontInfo) {
        int st=0,en=fonts.size();
        while (st+1<en)
        {
           int mid=(st+en)/2;
          long long w1=0,h1=0;
          for (char i:text)
          {
            h1=fontInfo.getHeight(fonts[mid]);
            w1+=fontInfo.getWidth(fonts[mid],i);
          } 
          if (h1<=h&&w1<=w)
            st=mid;
          else
            en=mid;
        }
    int h1=0,w1=0;
    for (auto i:text)
    {
      h1=fontInfo.getHeight(fonts[st]);
      w1+=fontInfo.getWidth(fonts[st],i);
    }
    if (h1<=h&&w1<=w)
      return fonts[st];
    else if (st!=0)
      return fonts[st-1];
    return -1;
}
