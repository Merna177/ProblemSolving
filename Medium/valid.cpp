class Solution {
public:
    int minAddToMakeValid(string S) {
       int cnt=0;
        int add=0;
        int total=0;
       for(int i=0;i<S.size();i++){
           if(S[i]=='(')cnt++;
           else if(S[i]==')')cnt--;
           if(cnt <0){
             add++;
             cnt=0;
           }
       }
        if(cnt<0)
            return cnt*-1 + add;
        else
         return cnt+add;
    }
};
