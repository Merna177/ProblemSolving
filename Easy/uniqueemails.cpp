class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
     int unique=0;
     map<string,int> mp;
     for(int i=0;i<emails.size();i++){
       string s="";
       int flag=0;
       int flag2=0;
       for(int j=0;j<emails[i].size();j++){
           if(emails[i][j]=='.' && flag2==0)
               continue;
          else  if(emails[i][j]=='+'){
               flag=1;
               continue;
           }
           else if (emails[i][j]=='@'){
               s+=emails[i][j];
               flag=0;
               flag2=1;
           }
           else if(flag!=1){
               s+=emails[i][j];
           }
           
       }
         mp[s]++;
         if(mp[s]==1)unique++;
     }
        return unique;
    }
};
