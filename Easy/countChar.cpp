class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
      int cntTarget[26]={0};
      int ret=0;
      for(int i=0;i<chars.size();i++)
          cntTarget[chars[i]-'a']++;
        int flag=0;
      for(int i=0;i<words.size();i++){
         int cntwords[26]={0};
         for(int j=0;j<words[i].size();j++){
             cntwords[words[i][j]-'a']++;
             if(cntwords[words[i][j]-'a']> cntTarget[words[i][j]-'a'])
             {
                 flag=1;
                 break;
             }
         }
          if(flag==0){
              ret+=words[i].size();
          }
          flag=0;

      }
return ret;
    }
};
