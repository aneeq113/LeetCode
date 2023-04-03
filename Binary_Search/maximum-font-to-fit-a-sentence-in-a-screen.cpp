int maxFont(string text, int w, int h, vector<int>& fonts, FontInfo fontInfo) {
        int st=0,en=fonts.size()+1;
        while (st+1<en)
        {
           int mid=(st+en)/2;
          int w1=0,int h1=0;
          for (char i:text)
          {
            h1+=getHeight(i,fonts[mid]);
            w1+=getWidth(i,fonts[mid]);
          } 
          if (h1>=h&&w1>=w)
            st=mid;
          else
            en=mid;
        }
  return st;
}
