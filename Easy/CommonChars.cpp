class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
          string s;
    int vis[102][102]={0};
    vector<string> v;
    for(int i=0;i<A.size();i++)
    {
     s=A[i];
     for(int j=0;j<s.length();j++)
     {
         char c=s[j];
         vis[i][c-'a'+1]++;
     }
     }
    for(int i=1;i<=26;i++)
    {
     int minn=1000;
     for(int j=0;j<A.size();j++)
     {
       if(vis[j][i]<minn)
          minn=vis[j][i];
      }
      for(int j=1;j<=minn;j++)
      {
           string s1;
            s1+=(char)('a'+i-1);
             v.push_back(s1);
        }
           
        
    }
    return v;
    }
};
