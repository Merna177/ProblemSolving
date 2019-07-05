class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> mp;
        int cnt=0;
        for(int i=0;i<J.size();i++)mp[J[i]]=1;
        for(int i=0;i<S.size();i++){
            if(mp[S[i]]!=0)cnt++;
        }
        return cnt;
    }
};
