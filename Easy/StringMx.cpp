class Solution {
public:
    vector<int> diStringMatch(string S) {
        int mx= S.size();
        int mn=0;
        vector<int> ret;
        for(int i=0;i<S.size();i++){
            if(S[i]=='I'){
                ret.push_back(mn);
                mn++;
                }
            else{
                ret.push_back(mx);
                mx--;
            }
        }
        if(S[S.size()-1]=='D'){
            ret.push_back(mx);
        }
        else 
            ret.push_back(mn);
        return ret;
        
    }
};
