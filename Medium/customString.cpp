class Solution {
public:
    string customSortString(string S, string T) {
        int arr[26];
        memset(arr,0,sizeof arr);
        for(int i=0;i<T.size();i++){
            arr[T[i]-'a']++;
        }
        string customString="";
        for(int i=0;i<S.size();i++){
          if(arr[S[i]-'a']==0)continue;
          while(arr[S[i]-'a']>0)
          {
              customString+=S[i];
              arr[S[i]-'a']--;
          }
        }
        for(int i=0;i<T.size();i++){
            if(arr[T[i]-'a']==0)
                continue;
            customString+=T[i];
        }
        return customString;
    }
};
